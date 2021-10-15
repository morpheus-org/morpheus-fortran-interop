/**
 * Morpheus_Ccl_DenseVector.hpp
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

#ifndef MORPHEUS_CCL_DENSEVECTOR_HPP
#define MORPHEUS_CCL_DENSEVECTOR_HPP

#include <Morpheus_Ccl_Types.hpp>
#include <fwd/Morpheus_Ccl_Fwd_DenseVector.hpp>

#ifdef __cplusplus
extern "C" {
#endif

void morpheus_ccl_create_default_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h** v);

void morpheus_ccl_create_vec_dense_r64_i32_r_h(fcl_vec_dense_r64_i32_r_h** v,
                                               fcl_i32_t n, ccl_value_t val);

void morpheus_ccl_create_vec_dense_from_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h* src, fcl_vec_dense_r64_i32_r_h** dst);

void morpheus_ccl_allocate_vec_dense_from_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h* src, fcl_vec_dense_r64_i32_r_h* dst);

void morpheus_ccl_assign_vec_dense_r64_i32_r_h(fcl_vec_dense_r64_i32_r_h* v,
                                               fcl_i32_t n, ccl_value_t val);

// TODO: Assign Random
// void morpheus_ccl_assign_random_vec_dense_r64_i32_r_h(
//     fcl_vec_dense_r64_i32_r_h* v, ccl_value_t range_low, ccl_value_t
//     range_high);

void morpheus_ccl_resize_vec_dense_r64_i32_r_h(fcl_vec_dense_r64_i32_r_h* v,
                                               fcl_i32_t n);

void morpheus_ccl_resize_fill_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h* v, fcl_i32_t n, ccl_value_t val);

void morpheus_ccl_destroy_vec_dense_r64_i32_r_h(fcl_vec_dense_r64_i32_r_h** v);

fcl_i32_t morpheus_ccl_size_vec_dense_r64_i32_r_h(fcl_vec_dense_r64_i32_r_h* v);

ccl_value_t* morpheus_ccl_data_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h* v);

ccl_value_t morpheus_ccl_values_at_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h* v, fcl_i32_t i);

void morpheus_ccl_set_values_at_vec_dense_r64_i32_r_h(
    fcl_vec_dense_r64_i32_r_h* v, fcl_i32_t i, fcl_i32_t val);

#ifdef __cplusplus
}
#endif

#endif  // MORPHEUS_CCL_DENSEVECTOR_HPP