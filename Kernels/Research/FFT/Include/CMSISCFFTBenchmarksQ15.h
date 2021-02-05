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
#include "Test.h"
#include "Pattern.h"
#include "dsp/transform_functions.h"


class CMSISCFFTBenchmarksQ15:public Client::Suite
    {
        public:
            CMSISCFFTBenchmarksQ15(Testing::testID_t id);
            virtual void setUp(Testing::testID_t,std::vector<Testing::param_t>& params,Client::PatternMgr *mgr);
            virtual void tearDown(Testing::testID_t,Client::PatternMgr *mgr);
        private:
            #include "CMSISCFFTBenchmarksQ15_decl.h"

            Client::Pattern<q15_t> input1;

            Client::LocalPattern<q15_t> output;
            Client::LocalPattern<q15_t> tmp;
            Client::LocalPattern<q15_t> state;
           

            int nbSamples;

            q15_t *pSrc;
            q15_t *pDst;
            q15_t *pState;
            q15_t *pTmp;

            arm_cfft_instance_q15 cfftInstance;
            arm_status status;


    };
