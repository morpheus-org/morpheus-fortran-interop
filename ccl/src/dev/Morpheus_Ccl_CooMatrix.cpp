/**
 * Morpheus_Ccl_CooMatrix.cpp
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

#include <dev/Morpheus_Ccl_CooMatrix.hpp>

void ccl_dmat_coo_create_default(ccl_dmat_coo** A) {
  *A = (new ccl_dmat_coo());
}

void ccl_dmat_coo_create(ccl_dmat_coo** A, ccl_index_t nrows, ccl_index_t ncols,
                         ccl_index_t nnnz) {
  *A = (new ccl_dmat_coo("ccl_dmat_coo::", nrows, ncols, nnnz));
}

void ccl_dmat_coo_create_from_dmat_coo(ccl_dmat_coo* src, ccl_dmat_coo** dst) {
  *dst = (new ccl_dmat_coo(*src));
}

void ccl_dmat_coo_create_from_dmat_dyn(ccl_dmat_dyn* src, ccl_dmat_coo** dst) {
  *dst = (new ccl_dmat_coo(*src));
}

void ccl_dmat_coo_resize(ccl_dmat_coo* A, const ccl_index_t num_rows,
                         const ccl_index_t num_cols,
                         const ccl_index_t num_nnz) {
  A->resize(num_rows, num_cols, num_nnz);
}

// Assumes dst matrix is always created
void ccl_dmat_coo_allocate_from_dmat_coo(ccl_dmat_coo* src, ccl_dmat_coo* dst) {
  dst->allocate("ccl_dmat_coo::allocate::", *src);
}

void ccl_dmat_coo_destroy(ccl_dmat_coo** A) { delete (*A); }

ccl_index_t ccl_dmat_coo_nrows(ccl_dmat_coo* A) { return A->nrows(); }

ccl_index_t ccl_dmat_coo_ncols(ccl_dmat_coo* A) { return A->ncols(); }

ccl_index_t ccl_dmat_coo_nnnz(ccl_dmat_coo* A) { return A->nnnz(); }

void ccl_dmat_coo_set_nrows(ccl_dmat_coo* A, ccl_index_t nrows) {
  A->set_nrows(nrows);
}

void ccl_dmat_coo_set_ncols(ccl_dmat_coo* A, ccl_index_t ncols) {
  A->set_ncols(ncols);
}

void ccl_dmat_coo_set_nnnz(ccl_dmat_coo* A, ccl_index_t nnnz) {
  A->set_nnnz(nnnz);
}

ccl_dvec_dense_i* ccl_dmat_coo_row_indices(ccl_dmat_coo* A) {
  return &(A->row_indices());
}

ccl_dvec_dense_i* ccl_dmat_coo_column_indices(ccl_dmat_coo* A) {
  return &(A->column_indices());
}

ccl_dvec_dense_v* ccl_dmat_coo_values(ccl_dmat_coo* A) {
  return &(A->values());
}

ccl_formats_e ccl_dmat_coo_format_enum(ccl_dmat_coo* A) {
  return A->format_enum();
}

int ccl_dmat_coo_format_index(ccl_dmat_coo* A) { return A->format_index(); }

void ccl_dmat_coo_hostmirror_create_default(ccl_dmat_coo_hostmirror** A) {
  *A = (new ccl_dmat_coo_hostmirror());
}

void ccl_dmat_coo_hostmirror_create(ccl_dmat_coo_hostmirror** A,
                                    ccl_index_t nrows, ccl_index_t ncols,
                                    ccl_index_t nnnz) {
  *A = (new ccl_dmat_coo_hostmirror("ccl_dmat_coo_hostmirror::", nrows, ncols,
                                    nnnz));
}

void ccl_dmat_coo_hostmirror_create_from_dmat_coo_hostmirror(
    ccl_dmat_coo_hostmirror* src, ccl_dmat_coo_hostmirror** dst) {
  *dst = (new ccl_dmat_coo_hostmirror(*src));
}

void ccl_dmat_coo_hostmirror_create_from_dmat_dyn_hostmirror(
    ccl_dmat_dyn_hostmirror* src, ccl_dmat_coo_hostmirror** dst) {
  *dst = (new ccl_dmat_coo_hostmirror(*src));
}

void ccl_dmat_coo_hostmirror_resize(ccl_dmat_coo_hostmirror* A,
                                    const ccl_index_t num_rows,
                                    const ccl_index_t num_cols,
                                    const ccl_index_t num_nnz) {
  A->resize(num_rows, num_cols, num_nnz);
}

// Assumes dst matrix is always created
void ccl_dmat_coo_hostmirror_allocate_from_dmat_coo_hostmirror(
    ccl_dmat_coo_hostmirror* src, ccl_dmat_coo_hostmirror* dst) {
  dst->allocate("ccl_dmat_coo_hostmirror::allocate::", *src);
}

void ccl_dmat_coo_hostmirror_destroy(ccl_dmat_coo_hostmirror** A) {
  delete (*A);
}

ccl_index_t ccl_dmat_coo_hostmirror_nrows(ccl_dmat_coo_hostmirror* A) {
  return A->nrows();
}

ccl_index_t ccl_dmat_coo_hostmirror_ncols(ccl_dmat_coo_hostmirror* A) {
  return A->ncols();
}

ccl_index_t ccl_dmat_coo_hostmirror_nnnz(ccl_dmat_coo_hostmirror* A) {
  return A->nnnz();
}

void ccl_dmat_coo_hostmirror_set_nrows(ccl_dmat_coo_hostmirror* A,
                                       ccl_index_t nrows) {
  A->set_nrows(nrows);
}

void ccl_dmat_coo_hostmirror_set_ncols(ccl_dmat_coo_hostmirror* A,
                                       ccl_index_t ncols) {
  A->set_ncols(ncols);
}

void ccl_dmat_coo_hostmirror_set_nnnz(ccl_dmat_coo_hostmirror* A,
                                      ccl_index_t nnnz) {
  A->set_nnnz(nnnz);
}

ccl_index_t ccl_dmat_coo_hostmirror_row_indices_at(ccl_dmat_coo_hostmirror* A,
                                                   ccl_index_t i) {
  return A->row_indices(i);
}

ccl_index_t ccl_dmat_coo_hostmirror_column_indices_at(
    ccl_dmat_coo_hostmirror* A, ccl_index_t i) {
  return A->column_indices(i);
}

ccl_value_t ccl_dmat_coo_hostmirror_values_at(ccl_dmat_coo_hostmirror* A,
                                              ccl_index_t i) {
  return A->values(i);
}

ccl_dvec_dense_i_hostmirror* ccl_dmat_coo_hostmirror_row_indices(
    ccl_dmat_coo_hostmirror* A) {
  return &(A->row_indices());
}

ccl_dvec_dense_i_hostmirror* ccl_dmat_coo_hostmirror_column_indices(
    ccl_dmat_coo_hostmirror* A) {
  return &(A->column_indices());
}

ccl_dvec_dense_v_hostmirror* ccl_dmat_coo_hostmirror_values(
    ccl_dmat_coo_hostmirror* A) {
  return &(A->values());
}

void ccl_dmat_coo_hostmirror_set_row_indices_at(ccl_dmat_coo_hostmirror* A,
                                                ccl_index_t i,
                                                ccl_index_t val) {
  A->row_indices(i) = val;
}

void ccl_dmat_coo_hostmirror_set_column_indices_at(ccl_dmat_coo_hostmirror* A,
                                                   ccl_index_t i,
                                                   ccl_index_t val) {
  A->column_indices(i) = val;
}

void ccl_dmat_coo_hostmirror_set_values_at(ccl_dmat_coo_hostmirror* A,
                                           ccl_index_t i, ccl_value_t val) {
  A->values(i) = val;
}

void ccl_dmat_coo_hostmirror_sort_by_row(ccl_dmat_coo_hostmirror* A) {
  A->sort_by_row();
}

void ccl_dmat_coo_hostmirror_sort_by_row_and_column(
    ccl_dmat_coo_hostmirror* A) {
  A->sort_by_row_and_column();
}

ccl_bool_t ccl_dmat_coo_hostmirror_is_sorted_by_row(
    ccl_dmat_coo_hostmirror* A) {
  return A->is_sorted_by_row();
}

ccl_bool_t ccl_dmat_coo_hostmirror_is_sorted(ccl_dmat_coo_hostmirror* A) {
  return A->is_sorted();
}

ccl_formats_e ccl_dmat_coo_hostmirror_format_enum(ccl_dmat_coo_hostmirror* A) {
  return A->format_enum();
}

int ccl_dmat_coo_hostmirror_format_index(ccl_dmat_coo_hostmirror* A) {
  return A->format_index();
}