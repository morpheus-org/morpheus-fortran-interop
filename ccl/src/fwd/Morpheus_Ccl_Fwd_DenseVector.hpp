/**
 * Morpheus_Ccl_Fwd_DenseVector.hpp
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

#ifndef MORPHEUS_CCL_FWD_DENSEVECTOR_HPP
#define MORPHEUS_CCL_FWD_DENSEVECTOR_HPP

#include <Morpheus_Ccl_Types.hpp>

#ifdef __cplusplus
#include <Morpheus_Core.hpp>

typedef Morpheus::DenseVector<fcl_r64_t, fcl_i32_t, fcl_right_t, fcl_host_t>
    fcl_vec_dense_r64_i32_r_h;
typedef typename fcl_vec_dense_r64_i32_r_h::HostMirror
    fcl_vec_dense_hostmirror_r64_i32_r_h;

typedef Morpheus::DenseVector<fcl_i32_t, fcl_i32_t, fcl_right_t, fcl_host_t>
    fcl_vec_dense_i32_i32_r_h;
#else
typedef struct Morpheus_DenseVector_r64_i32_r_h fcl_vec_dense_r64_i32_r_h;
typedef fcl_vec_dense_r64_i32_r_h fcl_vec_dense_hostmirror_r64_i32_r_h;

typedef struct Morpheus_DenseVector_i32_i32_r_h fcl_vec_dense_i32_i32_r_h;
#endif

#endif  // MORPHEUS_CCL_FWD_DENSEVECTOR_HPP