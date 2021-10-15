/**
 * Examples_02_coomat.cpp
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

#include <Morpheus_Ccl.hpp>

using coo = ccl_mat_coo;
using vec = ccl_vec_dense;

extern "C" {

int main() {
  morpheus_ccl_initialize_without_args();
  {
    coo *A;
    vec *x, *y;

    morpheus_ccl_create_mat_coo(&A, 5, 3, 3);

    morpheus_ccl_set_row_indices_at_coo(A, 0, 0);
    morpheus_ccl_set_column_indices_at_coo(A, 0, 0);
    morpheus_ccl_set_values_at_coo(A, 0, 4);

    morpheus_ccl_set_row_indices_at_coo(A, 1, 2);
    morpheus_ccl_set_column_indices_at_coo(A, 1, 1);
    morpheus_ccl_set_values_at_coo(A, 1, -2);

    morpheus_ccl_set_row_indices_at_coo(A, 2, 4);
    morpheus_ccl_set_column_indices_at_coo(A, 2, 2);
    morpheus_ccl_set_values_at_coo(A, 2, 2.5);

    morpheus_ccl_create_vec_dense(&x, 3, 3);
    morpheus_ccl_create_vec_dense(&y, 5, 0);

    morpheus_ccl_multiply_mat_coo_vec_dense_vec_dense_serial(A, x, y);

    morpheus_ccl_print_mat_coo(A);
    morpheus_ccl_print_vec_dense(x);
    morpheus_ccl_print_vec_dense(y);

    // shallow copy matrix
    coo *A_shallow;
    morpheus_ccl_create_mat_coo_from_mat_coo(A, &A_shallow);
    // Change value to ensure shallow copy was made
    morpheus_ccl_set_values_at_coo(A, 2, -2.5);

    morpheus_ccl_print_mat_coo(A_shallow);

    morpheus_ccl_destroy_mat_coo(&A);
    morpheus_ccl_destroy_mat_coo(&A_shallow);
    morpheus_ccl_destroy_vec_dense(&x);
    morpheus_ccl_destroy_vec_dense(&y);
  }
  morpheus_ccl_finalize();

  return 0;
}
}
