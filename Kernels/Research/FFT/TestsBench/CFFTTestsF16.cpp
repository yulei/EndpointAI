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
#include "CFFTTestsF16.h"
#include <stdio.h>
#include "Error.h"
#include "Test.h"
//#include "FFTDebug.h"

#define SNR_THRESHOLD 56

    void CFFTTestsF16::test_cfft_f16()
    {
       const float16_t *inp = input.ptr();
       arm_status status;

       float16_t *outfftp = outputfft.ptr();

       //printMath((complex16_t*)inp,input.nbSamples()>>1);

       if (this->ifft)
       {
         status=cifft(inp,outfftp,input.nbSamples()>>1);
       }
       else
       {
         status=cfft(inp,outfftp,input.nbSamples()>>1);
       }

       //printMath((complex16_t*)outfftp,input.nbSamples()>>1);

       
       ASSERT_TRUE(status==ARM_MATH_SUCCESS);
       ASSERT_SNR(outputfft,ref,(float16_t)SNR_THRESHOLD);
       ASSERT_EMPTY_TAIL(outputfft);


        
    } 

    void CFFTTestsF16::setUp(Testing::testID_t id,std::vector<Testing::param_t>& paramsArgs,Client::PatternMgr *mgr)
    {

       (void)paramsArgs;
       switch(id)
       {
case CFFTTestsF16::TEST_CFFT_F16_1:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_2_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_2_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_2:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_3_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_3_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_3:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_4_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_4_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_4:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_5_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_5_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_5:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_6_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_6_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_6:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_8_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_8_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_7:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_9_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_9_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_8:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_10_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_10_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_9:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_12_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_12_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_10:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_15_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_15_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_11:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_16_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_16_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_12:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_18_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_18_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_13:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_20_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_20_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_14:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_24_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_24_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_15:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_25_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_25_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_16:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_27_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_27_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_17:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_30_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_30_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_18:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_32_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_32_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_19:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_36_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_36_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_20:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_40_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_40_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_21:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_45_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_45_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_22:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_48_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_48_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_23:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_50_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_50_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_24:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_54_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_54_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_25:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_60_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_60_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_26:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_64_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_64_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_27:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_72_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_72_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_28:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_75_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_75_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_29:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_80_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_80_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_30:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_90_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_90_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_31:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_96_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_96_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_32:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_100_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_100_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_33:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_108_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_108_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_34:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_120_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_120_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_35:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_125_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_125_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_36:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_128_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_128_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_37:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_144_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_144_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_38:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_150_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_150_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_39:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_160_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_160_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_40:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_180_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_180_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_41:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_192_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_192_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_42:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_200_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_200_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_43:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_216_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_216_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_44:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_240_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_240_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_45:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_256_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_256_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_46:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_288_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_288_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_47:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_320_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_320_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_48:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_384_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_384_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_49:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_512_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_512_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_50:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_NOISY_4096_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_NOISY_4096_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_51:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_2_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_2_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_52:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_3_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_3_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_53:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_4_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_4_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_54:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_5_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_5_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_55:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_6_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_6_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_56:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_8_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_8_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_57:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_9_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_9_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_58:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_10_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_10_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_59:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_12_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_12_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_60:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_15_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_15_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_61:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_16_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_16_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_62:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_18_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_18_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_63:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_20_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_20_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_64:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_24_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_24_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_65:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_25_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_25_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_66:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_27_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_27_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_67:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_30_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_30_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_68:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_32_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_32_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_69:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_36_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_36_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_70:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_40_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_40_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_71:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_45_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_45_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_72:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_48_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_48_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_73:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_50_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_50_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_74:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_54_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_54_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_75:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_60_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_60_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_76:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_64_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_64_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_77:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_72_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_72_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_78:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_75_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_75_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_79:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_80_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_80_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_80:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_90_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_90_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_81:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_96_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_96_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_82:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_100_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_100_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_83:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_108_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_108_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_84:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_120_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_120_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_85:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_125_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_125_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_86:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_128_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_128_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_87:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_144_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_144_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_88:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_150_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_150_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_89:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_160_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_160_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_90:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_180_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_180_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_91:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_192_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_192_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_92:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_200_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_200_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_93:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_216_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_216_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_94:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_240_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_240_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_95:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_256_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_256_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_96:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_288_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_288_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_97:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_320_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_320_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_98:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_384_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_384_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_99:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_512_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_512_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_100:
  
    input.reload(CFFTTestsF16::INPUTS_CFFT_STEP_4096_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CFFT_STEP_4096_F16_ID,mgr);
  
    this->ifft=0;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_101:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_2_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_2_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_102:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_3_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_3_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_103:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_4_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_4_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_104:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_5_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_5_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_105:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_6_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_6_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_106:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_8_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_8_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_107:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_9_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_9_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_108:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_10_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_10_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_109:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_12_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_12_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_110:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_15_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_15_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_111:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_16_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_16_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_112:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_18_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_18_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_113:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_20_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_20_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_114:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_24_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_24_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_115:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_25_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_25_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_116:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_27_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_27_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_117:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_30_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_30_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_118:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_32_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_32_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_119:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_36_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_36_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_120:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_40_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_40_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_121:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_45_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_45_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_122:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_48_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_48_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_123:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_50_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_50_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_124:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_54_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_54_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_125:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_60_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_60_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_126:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_64_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_64_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_127:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_72_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_72_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_128:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_75_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_75_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_129:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_80_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_80_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_130:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_90_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_90_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_131:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_96_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_96_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_132:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_100_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_100_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_133:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_108_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_108_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_134:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_120_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_120_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_135:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_125_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_125_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_136:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_128_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_128_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_137:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_144_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_144_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_138:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_150_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_150_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_139:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_160_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_160_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_140:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_180_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_180_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_141:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_192_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_192_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_142:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_200_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_200_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_143:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_216_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_216_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_144:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_240_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_240_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_145:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_256_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_256_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_146:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_288_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_288_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_147:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_320_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_320_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_148:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_384_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_384_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_149:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_512_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_512_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_150:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_NOISY_4096_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_NOISY_4096_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_151:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_2_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_2_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_152:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_3_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_3_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_153:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_4_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_4_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_154:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_5_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_5_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_155:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_6_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_6_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_156:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_8_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_8_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_157:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_9_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_9_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_158:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_10_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_10_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_159:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_12_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_12_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_160:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_15_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_15_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_161:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_16_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_16_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_162:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_18_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_18_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_163:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_20_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_20_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_164:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_24_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_24_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_165:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_25_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_25_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_166:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_27_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_27_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_167:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_30_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_30_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_168:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_32_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_32_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_169:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_36_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_36_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_170:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_40_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_40_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_171:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_45_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_45_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_172:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_48_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_48_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_173:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_50_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_50_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_174:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_54_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_54_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_175:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_60_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_60_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_176:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_64_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_64_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_177:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_72_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_72_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_178:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_75_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_75_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_179:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_80_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_80_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_180:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_90_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_90_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_181:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_96_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_96_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_182:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_100_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_100_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_183:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_108_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_108_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_184:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_120_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_120_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_185:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_125_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_125_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_186:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_128_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_128_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_187:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_144_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_144_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_188:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_150_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_150_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_189:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_160_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_160_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_190:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_180_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_180_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_191:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_192_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_192_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_192:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_200_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_200_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_193:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_216_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_216_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_194:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_240_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_240_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_195:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_256_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_256_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_196:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_288_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_288_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_197:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_320_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_320_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_198:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_384_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_384_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_199:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_512_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_512_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  case CFFTTestsF16::TEST_CFFT_F16_200:
  
    input.reload(CFFTTestsF16::INPUTS_CIFFT_STEP_4096_F16_ID,mgr);
    ref.reload(  CFFTTestsF16::REF_CIFFT_STEP_4096_F16_ID,mgr);
  
    this->ifft=1;
  
  break;
  
  

       }
        outputfft.create(ref.nbSamples(),CFFTTestsF16::OUTPUT_CFFT_F16_ID,mgr);

    }

    void CFFTTestsF16::tearDown(Testing::testID_t id,Client::PatternMgr *mgr)
    {
        (void)id;
        outputfft.dump(mgr);
    }
