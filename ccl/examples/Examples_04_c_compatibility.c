/**
 * Examples_04_c_compatibility.cpp
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

typedef ccl_hmat_dyn dyn;
typedef ccl_hmat_coo coo;
typedef ccl_hvec_dense vec;

int main() {
  morpheus_ccl_initialize_without_args();
  {
    dyn *Adyn;
    coo *A;
    vec *x, *y;

    morpheus_ccl_create_hmat_coo(&A, 5, 3, 3);
    morpheus_ccl_set_row_indices_at_coo(A, 0, 0);
    morpheus_ccl_set_column_indices_at_coo(A, 0, 0);
    morpheus_ccl_set_values_at_coo(A, 0, 4);

    morpheus_ccl_set_row_indices_at_coo(A, 1, 2);
    morpheus_ccl_set_column_indices_at_coo(A, 1, 1);
    morpheus_ccl_set_values_at_coo(A, 1, -2);

    morpheus_ccl_set_row_indices_at_coo(A, 2, 4);
    morpheus_ccl_set_column_indices_at_coo(A, 2, 2);
    morpheus_ccl_set_values_at_coo(A, 2, 2.5);

    morpheus_ccl_create_hvec_dense(&x, 3, 3);
    morpheus_ccl_create_hvec_dense(&y, 5, 0);

    morpheus_ccl_create_hmat_dyn_from_hmat(A, COO_FORMAT, &Adyn);
    morpheus_ccl_print_hmat_dyn(Adyn);

    morpheus_ccl_multiply_hmat_dyn_hvec_dense_hvec_dense(Adyn, x,
                                                                       y);

    morpheus_ccl_print_hmat_dyn(Adyn);
    morpheus_ccl_print_hvec_dense(x);
    morpheus_ccl_print_hvec_dense(y);

    coo *Afromdyn;
    ccl_index_t *Adrind, *Adcind;
    ccl_value_t *Adval;

    morpheus_ccl_create_hmat_coo_from_hmat_dyn(Adyn, &Afromdyn);
    morpheus_ccl_print_hmat_coo(Afromdyn);
    morpheus_ccl_set_values_at_coo(A, 2, -22.5);
    morpheus_ccl_print_hmat_dyn(Adyn);

    morpheus_ccl_activate_hmat_dyn(Adyn, CSR_FORMAT);
    morpheus_ccl_print_hmat_dyn(Adyn);

    morpheus_ccl_destroy_hmat_dyn(&Adyn);
    morpheus_ccl_destroy_hmat_coo(&A);
    morpheus_ccl_destroy_hvec_dense(&x);
    morpheus_ccl_destroy_hvec_dense(&y);
  }
  morpheus_ccl_finalize();

  return 0;
}
