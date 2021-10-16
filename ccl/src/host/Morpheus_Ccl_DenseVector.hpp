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

#include <host/fwd/Morpheus_Ccl_Fwd_DenseVector.hpp>

#ifdef __cplusplus
extern "C" {
#endif

void ccl_hvec_dense_v_create_default(ccl_hvec_dense_v** v);

void ccl_hvec_dense_v_create(ccl_hvec_dense_v** v, ccl_index_t n,
                             ccl_value_t val);

void ccl_hvec_dense_v_create_from_hvec_dense_v(ccl_hvec_dense_v* src,
                                               ccl_hvec_dense_v** dst);

void ccl_hvec_dense_v_allocate_from_hvec_dense_v(ccl_hvec_dense_v* src,
                                                 ccl_hvec_dense_v* dst);

void ccl_hvec_dense_v_assign(ccl_hvec_dense_v* v, ccl_index_t n,
                             ccl_value_t val);

// TODO: Assign Random
// void ccl_hvec_dense_v_assign_random(
//     ccl_hvec_dense_v* v, ccl_value_t range_low, ccl_value_t
//     range_high);

void ccl_hvec_dense_v_resize(ccl_hvec_dense_v* v, ccl_index_t n);

void ccl_hvec_dense_v_resize_fill(ccl_hvec_dense_v* v, ccl_index_t n,
                                  ccl_value_t val);

void ccl_hvec_dense_v_destroy(ccl_hvec_dense_v** v);

ccl_index_t ccl_hvec_dense_v_size(ccl_hvec_dense_v* v);

ccl_value_t* ccl_hvec_dense_v_data(ccl_hvec_dense_v* v);

ccl_value_t ccl_hvec_dense_v_values_at(ccl_hvec_dense_v* v, ccl_index_t i);

void ccl_hvec_dense_v_set_values_at(ccl_hvec_dense_v* v, ccl_index_t i,
                                    ccl_index_t val);

#ifdef __cplusplus
}
#endif

#endif  // MORPHEUS_CCL_DENSEVECTOR_HPP