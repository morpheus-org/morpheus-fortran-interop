/**
 * Fcl_C_Convert.hpp
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

#ifndef FCL_C_CONVERT_HPP
#define FCL_C_CONVERT_HPP

#include "Fcl_C_CooMatrix.hpp"
#include "Fcl_C_CsrMatrix.hpp"
#include "Fcl_C_DiaMatrix.hpp"
#include "Fcl_C_DynamicMatrix.hpp"
#include "Fcl_C_DenseMatrix.hpp"
#include "Fcl_C_DenseVector.hpp"

#ifdef __cplusplus
extern "C" {
#endif

// coo -> coo
void c_morpheus_convert_mat_coo_to_mat_coo_r64_i32_r_h_serial(
    const fcl_mat_coo_r64_i32_r_h* src, fcl_mat_coo_r64_i32_r_h* dst);

// csr -> csr
void c_morpheus_convert_mat_csr_to_mat_csr_r64_i32_r_h_serial(
    const fcl_mat_csr_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h* dst);
// csr -> coo
void c_morpheus_convert_mat_csr_to_mat_coo_r64_i32_r_h_serial(
    const fcl_mat_csr_r64_i32_r_h* src, fcl_mat_coo_r64_i32_r_h* dst);
// coo -> csr
void c_morpheus_convert_mat_coo_to_mat_csr_r64_i32_r_h_serial(
    const fcl_mat_coo_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h* dst);
// csr -> dia
void c_morpheus_convert_mat_csr_to_mat_dia_r64_i32_r_h_serial(
    const fcl_mat_csr_r64_i32_r_h* src, fcl_mat_dia_r64_i32_r_h* dst);

// dia -> dia
void c_morpheus_convert_mat_dia_to_mat_dia_r64_i32_r_h_serial(
    const fcl_mat_dia_r64_i32_r_h* src, fcl_mat_dia_r64_i32_r_h* dst);
// dia -> coo
void c_morpheus_convert_mat_dia_to_mat_coo_r64_i32_r_h_serial(
    const fcl_mat_dia_r64_i32_r_h* src, fcl_mat_coo_r64_i32_r_h* dst);
// coo -> dia
void c_morpheus_convert_mat_coo_to_mat_dia_r64_i32_r_h_serial(
    const fcl_mat_coo_r64_i32_r_h* src, fcl_mat_dia_r64_i32_r_h* dst);
// dia -> csr
void c_morpheus_convert_mat_dia_to_mat_csr_r64_i32_r_h_serial(
    const fcl_mat_dia_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h* dst);

// dense mat -> dense mat
void c_morpheus_convert_mat_dense_to_mat_dense_r64_i32_r_h_serial(
    const fcl_mat_dense_r64_i32_r_h* src, fcl_mat_dense_r64_i32_r_h* dst);
// dense mat -> dense vec
void c_morpheus_convert_mat_dense_to_vec_dense_r64_i32_r_h_serial(
    const fcl_mat_dense_r64_i32_r_h* src, fcl_vec_dense_r64_i32_r_h* dst);
// dense mat -> coo
void c_morpheus_convert_mat_dense_to_mat_coo_r64_i32_r_h_serial(
    const fcl_mat_dense_r64_i32_r_h* src, fcl_mat_coo_r64_i32_r_h* dst);
// coo -> dense mat
void c_morpheus_convert_mat_coo_to_mat_dense_r64_i32_r_h_serial(
    const fcl_mat_coo_r64_i32_r_h* src, fcl_mat_dense_r64_i32_r_h* dst);

// dynamic -> concrete
void c_morpheus_convert_mat_dyn_to_mat_coo_r64_i32_r_h_serial(
    const fcl_mat_dyn_r64_i32_r_h* src, fcl_mat_coo_r64_i32_r_h* dst);
void c_morpheus_convert_mat_dyn_to_mat_csr_r64_i32_r_h_serial(
    const fcl_mat_dyn_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h* dst);
void c_morpheus_convert_mat_dyn_to_mat_dia_r64_i32_r_h_serial(
    const fcl_mat_dyn_r64_i32_r_h* src, fcl_mat_dia_r64_i32_r_h* dst);

// concrete -> dynamic
void c_morpheus_convert_mat_coo_to_mat_dyn_r64_i32_r_h_serial(
    const fcl_mat_coo_r64_i32_r_h* src, fcl_mat_dyn_r64_i32_r_h* dst);
void c_morpheus_convert_mat_csr_to_mat_dyn_r64_i32_r_h_serial(
    const fcl_mat_csr_r64_i32_r_h* src, fcl_mat_dyn_r64_i32_r_h* dst);
void c_morpheus_convert_mat_dia_to_mat_dyn_r64_i32_r_h_serial(
    const fcl_mat_dia_r64_i32_r_h* src, fcl_mat_dyn_r64_i32_r_h* dst);

// dynamic -> dynamic
void c_morpheus_convert_mat_dyn_to_mat_dyn_r64_i32_r_h_serial(
    const fcl_mat_dyn_r64_i32_r_h* src, fcl_mat_dyn_r64_i32_r_h* dst);

// in-place conversions for dynamic
void c_morpheus_convert_mat_dyn_r64_i32_r_h_serial(fcl_mat_dyn_r64_i32_r_h* mat,
                                                   const fcl_formats_e index);
void c_morpheus_convert_index_mat_dyn_r64_i32_r_h_serial(
    fcl_mat_dyn_r64_i32_r_h* mat, const int index);

// desne vec -> dense vec
void c_morpheus_convert_vec_dense_to_vec_dense_r64_i32_r_h_serial(
    const fcl_vec_dense_r64_i32_r_h* src, fcl_vec_dense_r64_i32_r_h* dst);
#ifdef __cplusplus
}
#endif

#endif  // FCL_C_CONVERT_HPP