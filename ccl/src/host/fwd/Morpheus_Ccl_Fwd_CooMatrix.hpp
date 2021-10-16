/**
 * Morpheus_Ccl_Fwd_CooMatrix.hpp
 *
 * EPCC, The University of Edinburgh
 *
 * (c) 2021 The University of Edinburgh
 *
 * Contributing Authors:
 * Christodoulos Stylianou (c.stylianou@ed.ac.uk)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * 	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MORPHEUS_CCL_HOST_FWD_COOMATRIX_HPP
#define MORPHEUS_CCL_HOST_FWD_COOMATRIX_HPP

#include <Morpheus_Ccl_Types.hpp>

#ifdef __cplusplus
#include <Morpheus_Core.hpp>

typedef Morpheus::CooMatrix<ccl_value_t, ccl_index_t, ccl_layout_t, ccl_host_t>
    ccl_hmat_coo;
typedef typename ccl_hmat_coo::HostMirror ccl_hmat_coo_hostmirror;
#else
typedef struct Morpheus_CooMatrix_Host ccl_hmat_coo;
typedef ccl_hmat_coo ccl_hmat_coo_hostmirror;
#endif

#endif  // MORPHEUS_CCL_HOST_FWD_COOMATRIX_HPP
