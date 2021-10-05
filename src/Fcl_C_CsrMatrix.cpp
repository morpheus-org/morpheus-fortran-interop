/**
 * Fcl_C_CsrMatrix.cpp
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

#include "Fcl_C_CsrMatrix.hpp"

extern "C" {
void c_morpheus_create_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h** A,
                                           fcl_i32_t** A_row_offsets,
                                           fcl_i32_t** A_column_indices,
                                           fcl_r64_t** A_values,
                                           fcl_i32_t nrows, fcl_i32_t ncols,
                                           fcl_i32_t nnnz) {
  *A = (new fcl_mat_csr_r64_i32_r_h("fcl_mat_csr_r64_i32_r_h::", nrows, ncols,
                                    nnnz));

  *A_row_offsets    = (*A)->row_offsets.data();
  *A_column_indices = (*A)->column_indices.data();
  *A_values         = (*A)->values.data();
}

void c_morpheus_create_mat_csr_from_mat_csr_r64_i32_r_h(
    fcl_mat_csr_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h** dst,
    fcl_i32_t** dst_row_offsets, fcl_i32_t** dst_column_indices,
    fcl_r64_t** dst_values) {
  *dst = (new fcl_mat_csr_r64_i32_r_h(*src));

  *dst_row_offsets    = src->row_offsets.data();
  *dst_column_indices = src->column_indices.data();
  *dst_values         = src->values.data();
}

void c_morpheus_create_mat_csr_from_mat_dyn_r64_i32_r_h(
    fcl_mat_dyn_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h** dst,
    fcl_i32_t** dst_row_offsets, fcl_i32_t** dst_column_indices,
    fcl_r64_t** dst_values) {
  *dst = (new fcl_mat_csr_r64_i32_r_h(*src));

  *dst_row_offsets    = (*dst)->row_offsets.data();
  *dst_column_indices = (*dst)->column_indices.data();
  *dst_values         = (*dst)->values.data();
}

void c_morpheus_resize_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A,
                                           fcl_i32_t** A_row_offsets,
                                           fcl_i32_t** A_column_indices,
                                           fcl_r64_t** A_values,
                                           const fcl_i32_t num_rows,
                                           const fcl_i32_t num_cols,
                                           const fcl_i32_t num_nnz) {
  A->resize(num_rows, num_cols, num_nnz);
  *A_row_offsets    = A->row_offsets.data();
  *A_column_indices = A->column_indices.data();
  *A_values         = A->values.data();
}

// Assumes dst matrix is always created
void c_morpheus_allocate_mat_csr_from_mat_csr_r64_i32_r_h(
    fcl_mat_csr_r64_i32_r_h* src, fcl_mat_csr_r64_i32_r_h* dst,
    fcl_i32_t** dst_row_offsets, fcl_i32_t** dst_column_indices,
    fcl_r64_t** dst_values) {
  dst->allocate("fcl_mat_csr_r64_i32_r_h::allocate::", *src);

  *dst_row_offsets    = (*dst).row_offsets.data();
  *dst_column_indices = (*dst).column_indices.data();
  *dst_values         = (*dst).values.data();
}

void c_morpheus_destroy_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h** A) {
  delete (*A);
}

fcl_i32_t c_morpheus_nrows_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A) {
  return (*A).nrows();
}

fcl_i32_t c_morpheus_ncols_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A) {
  return (*A).ncols();
}

fcl_i32_t c_morpheus_nnnz_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A) {
  return (*A).nnnz();
}

void c_morpheus_set_nrows_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A,
                                              fcl_i32_t nrows) {
  (*A).set_nrows(nrows);
}

void c_morpheus_set_ncols_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A,
                                              fcl_i32_t ncols) {
  (*A).set_ncols(ncols);
}

void c_morpheus_set_nnnz_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A,
                                             fcl_i32_t nnnz) {
  (*A).set_nnnz(nnnz);
}

fcl_formats_e c_morpheus_format_enum_mat_csr_r64_i32_r_h(
    fcl_mat_csr_r64_i32_r_h* A) {
  return (*A).format_enum();
}

int c_morpheus_format_index_mat_csr_r64_i32_r_h(fcl_mat_csr_r64_i32_r_h* A) {
  return (*A).format_index();
}
}