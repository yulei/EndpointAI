/* ----------------------------------------------------------------------
*
* Copyright (C) 2010-2021 ARM Limited or its affiliates. All rights reserved.
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
#include "CFFTTestsF32.h"
#include <stdio.h>
#include "Error.h"
#include "Test.h"
//#include "FFTDebug.h"

#define SNR_THRESHOLD 120

    void CFFTTestsF32::test_cfft_f32()
    {
       const float32_t *inp = input.ptr();
       arm_status status;

       float32_t *outfftp = outputfft.ptr();

       //printMath((complex<float32_t>*)inp,input.nbSamples()>>1);

       if (this->ifft)
       {
         status=cifft(inp,outfftp,input.nbSamples()>>1);
       }
       else
       {
         status=cfft(inp,outfftp,input.nbSamples()>>1);
       }

       //printMath((complex<float32_t>*)outfftp,input.nbSamples()>>1);

       
       ASSERT_TRUE(status==ARM_MATH_SUCCESS);
       ASSERT_SNR(outputfft,ref,(float32_t)SNR_THRESHOLD);
       ASSERT_EMPTY_TAIL(outputfft);


    } 

    void CFFTTestsF32::setUp(Testing::testID_t id,std::vector<Testing::param_t>& paramsArgs,Client::PatternMgr *mgr)
    {

       (void)paramsArgs;
       switch(id)
       {
case CFFTTestsF32::TEST_CFFT_F32_1:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_2_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_2_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_2:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_3_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_3_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_3:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_4_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_4_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_4:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_5_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_5_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_5:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_6_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_6_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_6:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_8_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_8_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_7:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_9_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_9_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_8:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_10_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_10_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_9:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_12_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_12_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_10:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_15_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_15_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_11:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_16_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_16_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_12:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_18_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_18_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_13:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_20_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_20_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_14:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_24_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_24_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_15:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_25_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_25_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_16:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_27_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_27_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_17:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_30_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_30_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_18:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_32_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_32_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_19:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_36_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_36_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_20:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_40_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_40_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_21:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_45_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_45_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_22:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_48_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_48_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_23:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_50_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_50_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_24:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_54_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_54_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_25:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_60_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_60_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_26:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_64_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_64_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_27:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_72_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_72_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_28:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_75_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_75_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_29:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_80_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_80_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_30:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_90_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_90_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_31:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_96_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_96_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_32:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_100_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_100_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_33:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_108_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_108_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_34:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_120_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_120_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_35:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_125_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_125_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_36:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_128_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_128_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_37:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_144_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_144_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_38:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_150_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_150_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_39:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_160_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_160_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_40:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_180_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_180_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_41:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_192_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_192_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_42:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_200_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_200_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_43:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_216_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_216_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_44:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_240_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_240_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_45:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_256_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_256_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_46:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_288_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_288_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_47:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_320_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_320_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_48:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_384_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_384_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_49:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_512_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_512_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_50:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_NOISY_4096_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_NOISY_4096_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_51:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_2_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_2_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_52:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_3_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_3_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_53:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_4_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_4_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_54:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_5_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_5_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_55:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_6_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_6_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_56:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_8_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_8_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_57:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_9_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_9_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_58:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_10_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_10_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_59:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_12_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_12_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_60:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_15_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_15_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_61:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_16_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_16_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_62:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_18_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_18_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_63:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_20_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_20_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_64:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_24_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_24_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_65:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_25_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_25_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_66:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_27_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_27_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_67:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_30_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_30_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_68:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_32_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_32_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_69:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_36_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_36_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_70:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_40_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_40_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_71:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_45_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_45_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_72:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_48_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_48_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_73:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_50_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_50_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_74:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_54_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_54_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_75:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_60_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_60_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_76:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_64_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_64_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_77:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_72_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_72_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_78:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_75_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_75_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_79:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_80_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_80_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_80:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_90_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_90_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_81:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_96_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_96_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_82:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_100_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_100_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_83:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_108_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_108_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_84:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_120_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_120_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_85:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_125_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_125_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_86:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_128_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_128_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_87:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_144_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_144_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_88:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_150_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_150_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_89:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_160_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_160_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_90:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_180_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_180_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_91:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_192_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_192_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_92:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_200_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_200_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_93:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_216_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_216_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_94:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_240_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_240_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_95:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_256_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_256_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_96:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_288_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_288_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_97:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_320_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_320_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_98:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_384_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_384_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_99:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_512_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_512_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_100:
  
    input.reload(CFFTTestsF32::INPUTS_CFFT_STEP_4096_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CFFT_STEP_4096_F32_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_101:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_2_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_2_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_102:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_3_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_3_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_103:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_4_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_4_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_104:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_5_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_5_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_105:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_6_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_6_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_106:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_8_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_8_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_107:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_9_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_9_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_108:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_10_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_10_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_109:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_12_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_12_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_110:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_15_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_15_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_111:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_16_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_16_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_112:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_18_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_18_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_113:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_20_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_20_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_114:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_24_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_24_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_115:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_25_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_25_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_116:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_27_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_27_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_117:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_30_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_30_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_118:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_32_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_32_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_119:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_36_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_36_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_120:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_40_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_40_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_121:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_45_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_45_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_122:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_48_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_48_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_123:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_50_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_50_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_124:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_54_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_54_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_125:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_60_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_60_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_126:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_64_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_64_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_127:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_72_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_72_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_128:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_75_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_75_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_129:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_80_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_80_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_130:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_90_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_90_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_131:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_96_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_96_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_132:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_100_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_100_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_133:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_108_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_108_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_134:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_120_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_120_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_135:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_125_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_125_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_136:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_128_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_128_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_137:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_144_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_144_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_138:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_150_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_150_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_139:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_160_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_160_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_140:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_180_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_180_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_141:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_192_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_192_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_142:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_200_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_200_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_143:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_216_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_216_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_144:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_240_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_240_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_145:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_256_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_256_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_146:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_288_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_288_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_147:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_320_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_320_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_148:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_384_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_384_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_149:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_512_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_512_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_150:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_NOISY_4096_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_NOISY_4096_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_151:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_2_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_2_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_152:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_3_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_3_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_153:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_4_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_4_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_154:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_5_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_5_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_155:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_6_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_6_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_156:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_8_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_8_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_157:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_9_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_9_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_158:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_10_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_10_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_159:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_12_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_12_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_160:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_15_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_15_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_161:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_16_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_16_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_162:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_18_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_18_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_163:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_20_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_20_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_164:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_24_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_24_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_165:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_25_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_25_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_166:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_27_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_27_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_167:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_30_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_30_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_168:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_32_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_32_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_169:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_36_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_36_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_170:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_40_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_40_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_171:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_45_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_45_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_172:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_48_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_48_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_173:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_50_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_50_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_174:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_54_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_54_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_175:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_60_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_60_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_176:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_64_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_64_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_177:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_72_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_72_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_178:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_75_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_75_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_179:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_80_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_80_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_180:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_90_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_90_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_181:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_96_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_96_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_182:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_100_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_100_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_183:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_108_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_108_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_184:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_120_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_120_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_185:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_125_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_125_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_186:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_128_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_128_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_187:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_144_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_144_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_188:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_150_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_150_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_189:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_160_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_160_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_190:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_180_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_180_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_191:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_192_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_192_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_192:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_200_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_200_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_193:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_216_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_216_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_194:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_240_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_240_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_195:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_256_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_256_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_196:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_288_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_288_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_197:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_320_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_320_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_198:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_384_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_384_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_199:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_512_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_512_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF32::TEST_CFFT_F32_200:
  
    input.reload(CFFTTestsF32::INPUTS_CIFFT_STEP_4096_F32_ID,mgr);
    ref.reload(  CFFTTestsF32::REF_CIFFT_STEP_4096_F32_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  

       }
        outputfft.create(ref.nbSamples(),CFFTTestsF32::OUTPUT_CFFT_F32_ID,mgr);

    }

    void CFFTTestsF32::tearDown(Testing::testID_t id,Client::PatternMgr *mgr)
    {
        (void)id;
        outputfft.dump(mgr);
    }
