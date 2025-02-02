/*
 * Copyright (c) 2009-2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*============================ INCLUDES ======================================*/
#include <stdio.h>
#include "platform.h"
#include "example_gui.h"
#include "./controls/controls.h"
#include <math.h>

#if defined(__clang__)
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wsign-conversion"
#   pragma clang diagnostic ignored "-Wpadded"
#   pragma clang diagnostic ignored "-Wcast-qual"
#   pragma clang diagnostic ignored "-Wcast-align"
#   pragma clang diagnostic ignored "-Wmissing-field-initializers"
#   pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"
#   pragma clang diagnostic ignored "-Wmissing-braces"
#   pragma clang diagnostic ignored "-Wunused-const-variable"
#   pragma clang diagnostic ignored "-Wmissing-prototypes"
#   pragma clang diagnostic ignored "-Wgnu-statement-expression"
#endif

/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/

#define arm_2d_layer(__TILE_ADDR, __TRANS, __X, __Y, ...)                       \
    {                                                                           \
        .ptTile = (__TILE_ADDR),                                                \
        .tRegion.tLocation.iX = (__X),                                          \
        .tRegion.tLocation.iY = (__Y),                                          \
        .chTransparency = (__TRANS),                                            \
        __VA_ARGS__                                                             \
    }

/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ PROTOTYPES ====================================*/
/*============================ LOCAL VARIABLES ===============================*/


extern const uint8_t c_bmpWhiteDot[19*20*sizeof(uint16_t)];
extern const arm_2d_tile_t c_tPictureWhiteDot;


/*============================ IMPLEMENTATION ================================*/

static volatile uint32_t s_wSystemTimeInMs = 0;
static volatile bool s_bTimeout = false;
extern void platform_1ms_event_handler(void);

void platform_1ms_event_handler(void)
{
    s_wSystemTimeInMs++;
    if (!(s_wSystemTimeInMs & (_BV(10) - 1))) {
        s_bTimeout = true;
    }
}

void example_gui_init(void)
{
    controls_init();

}


void example_gui_do_events(void)
{

}


__WEAK
void example_gui_on_refresh_evt_handler(const arm_2d_tile_t *ptFrameBuffer)
{
     ARM_2D_UNUSED(ptFrameBuffer);
}

extern const arm_2d_tile_t c_tileArrow;
extern
const arm_2d_tile_t c_tileGear01;
extern
const arm_2d_tile_t c_tileGear02;
extern
const arm_2d_tile_t c_tilePointerSec;

extern 
const arm_2d_tile_t c_tileWatchPanel;

extern 
const arm_2d_tile_t c_tileClockface;
 
extern 
const arm_2d_tile_t c_tileBackground;

typedef struct {
    arm_2d_op_rotate_alpha_t tOP;
    const arm_2d_tile_t *ptTile;
    float fAngle;
    float fAngleSpeed;
    arm_2d_location_t tCentre;
    arm_2d_region_t tRegion;
    uint8_t chOpacity;
} demo_gears_t;

static
demo_gears_t s_tGears[] = {

    {
        .ptTile = &c_tileGear02,
        .fAngleSpeed = 3.0f,
        .tCentre = {
            .iX = 20,
            .iY = 20,
        },

        .tRegion = {
            .tLocation = {
                .iX = ((APP_SCREEN_WIDTH - 41) >> 1) + 30,
                .iY = ((APP_SCREEN_HEIGHT - 40) >>1) + 30,
            },
            .tSize = {
                .iWidth = 41,
                .iHeight = 41,
            },
        },
        .chOpacity = 255,
    },

    {
        .ptTile = &c_tileGear01,
        .fAngleSpeed = -0.5f,
        .tCentre = {
            .iX = 61,
            .iY = 60,
        },
        .tRegion = {
            .tLocation = {
                .iX = ((APP_SCREEN_WIDTH - 120) >> 1),
                .iY = ((APP_SCREEN_HEIGHT - 120) >>1),
            },
            .tSize = {
                .iWidth = 120,
                .iHeight = 120,
            },
        },
        .chOpacity = 200,
    },

    {
        .ptTile = &c_tilePointerSec,
        .fAngleSpeed = 1.0f,
        .tCentre = {
            .iX = 6,
            .iY = 111,
        },
        .tRegion = {
            .tLocation = {
                .iX = ((APP_SCREEN_WIDTH - 12) >> 1),
                .iY = ((APP_SCREEN_HEIGHT - 147) >>1),
            },
            .tSize = {
                .iWidth = 12,
                .iHeight = 147,
            },
        },
        .chOpacity = 255,
    },

};

void example_gui_refresh(const arm_2d_tile_t *ptTile, bool bIsNewFrame)
{

    static const arm_2d_region_t tPanelRegion = {
        .tLocation = {
            .iX = ((APP_SCREEN_WIDTH - 221) >> 1),
            .iY = ((APP_SCREEN_HEIGHT - 221) >> 1),
        },
        .tSize = {
            .iWidth = 221,
            .iHeight = 221,
        },
    };
    
    //arm_2d_rgb16_fill_colour(ptTile, NULL, GLCD_COLOR_BLACK);
    arm_2d_rgb16_tile_copy(&c_tileBackground,
                            ptTile,
                            NULL,
                            ARM_2D_CP_MODE_COPY);
    
    arm_2d_rbg565_alpha_blending_with_colour_masking(
                                &c_tileWatchPanel,
                                ptTile,
                                &tPanelRegion,
                                128,
                                (arm_2d_color_rgb565_t){GLCD_COLOR_BLACK});

    arm_foreach (demo_gears_t, s_tGears) {

        if (bIsNewFrame) {
            _->fAngle += ARM_2D_ANGLE(_->fAngleSpeed);

            _->fAngle = fmodf(_->fAngle,ARM_2D_ANGLE(360));

        }

        if (255 == _->chOpacity) {
            arm_2dp_rgb565_tile_rotation(
                                            (arm_2d_op_rotate_t *)&(_->tOP),
                                            _->ptTile,          //!< source tile
                                            ptTile,             //!< target tile
                                            &(_->tRegion),      //!< target region
                                            _->tCentre,         //!< center point
                                            _->fAngle,          //!< rotation angle
                                            GLCD_COLOR_BLACK);  //!< masking colour

        } else {
            arm_2dp_rgb565_tile_rotation_with_alpha(
                                            &(_->tOP),
                                            _->ptTile,          //!< source tile
                                            ptTile,             //!< target tile
                                            &(_->tRegion),      //!< target region
                                            _->tCentre,         //!< center point
                                            _->fAngle,          //!< rotation angle
                                            GLCD_COLOR_BLACK,   //!< masking colour
                                            _->chOpacity);      //!< Opacity
        }
    }

    example_gui_on_refresh_evt_handler(ptTile);
}


#if defined(__clang__)
#   pragma clang diagnostic pop
#endif
