/**
 * Examples_13_Mirroring.c
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

#include <stdio.h>
#include <string.h>
#include <assert.h>

typedef ccl_mat_dyn dyn;
typedef ccl_mat_coo coo;
typedef ccl_mat_csr csr;
typedef ccl_mat_dia dia;
typedef ccl_vec_dense vec;

typedef ccl_mat_coo_hostmirror mirror_coo;
typedef ccl_mat_csr_hostmirror mirror_csr;
typedef ccl_mat_dia_hostmirror mirror_dia;
typedef ccl_vec_dense_hostmirror mirror_vec;
typedef ccl_mat_dyn_hostmirror mirror_dyn;

coo* ref_coo(){
  coo *A;
  morpheus_ccl_create_mat_coo(&A, 4, 3, 6);
  // COO Equivalent:
  // Row Offsets: [0, 1, 2, 0, 2, 1]
  // Column Indices: [0, 1, 2, 0, 2, 1]
  // Values: [10, 20, 30, 40, 50, 60]
  morpheus_ccl_set_row_indices_at_coo(A, 0, 0);
  morpheus_ccl_set_row_indices_at_coo(A, 1, 1);
  morpheus_ccl_set_row_indices_at_coo(A, 2, 2);
  morpheus_ccl_set_row_indices_at_coo(A, 3, 0);
  morpheus_ccl_set_row_indices_at_coo(A, 4, 2);
  morpheus_ccl_set_row_indices_at_coo(A, 5, 1);
  
  morpheus_ccl_set_column_indices_at_coo(A, 0, 0);
  morpheus_ccl_set_column_indices_at_coo(A, 1, 1);
  morpheus_ccl_set_column_indices_at_coo(A, 2, 2);
  morpheus_ccl_set_column_indices_at_coo(A, 3, 0);
  morpheus_ccl_set_column_indices_at_coo(A, 4, 2);
  morpheus_ccl_set_column_indices_at_coo(A, 5, 1);
  
  morpheus_ccl_set_values_at_coo(A, 0, 10);
  morpheus_ccl_set_values_at_coo(A, 1, 20);
  morpheus_ccl_set_values_at_coo(A, 2, 30);
  morpheus_ccl_set_values_at_coo(A, 3, 40);
  morpheus_ccl_set_values_at_coo(A, 4, 50);
  morpheus_ccl_set_values_at_coo(A, 5, 60);
  
  return A;
}

csr* ref_csr(){
  csr *A;
  morpheus_ccl_create_mat_csr(&A, 4, 3, 6);
  // CSR Equivalent:
  // Row Offsets: [0, 2, 3, 5, 6]
  // Column Indices: [0, 1, 2, 0, 2, 1]
  // Values: [10, 20, 30, 40, 50, 60]
  morpheus_ccl_set_row_offsets_at_csr(A, 0, 0);
  morpheus_ccl_set_row_offsets_at_csr(A, 1, 2);
  morpheus_ccl_set_row_offsets_at_csr(A, 2, 3);
  morpheus_ccl_set_row_offsets_at_csr(A, 3, 5);
  morpheus_ccl_set_row_offsets_at_csr(A, 4, 6);
  
  morpheus_ccl_set_column_indices_at_csr(A, 0, 0);
  morpheus_ccl_set_column_indices_at_csr(A, 1, 1);
  morpheus_ccl_set_column_indices_at_csr(A, 2, 2);
  morpheus_ccl_set_column_indices_at_csr(A, 3, 0);
  morpheus_ccl_set_column_indices_at_csr(A, 4, 2);
  morpheus_ccl_set_column_indices_at_csr(A, 5, 1);
  
  morpheus_ccl_set_values_at_csr(A, 0, 10);
  morpheus_ccl_set_values_at_csr(A, 1, 20);
  morpheus_ccl_set_values_at_csr(A, 2, 30);
  morpheus_ccl_set_values_at_csr(A, 3, 40);
  morpheus_ccl_set_values_at_csr(A, 4, 50);
  morpheus_ccl_set_values_at_csr(A, 5, 60);
  
  return A;
}

dia* ref_dia(){
  dia *A;

  morpheus_ccl_create_mat_dia(&A, 4, 3, 6, 3);

  // Diagonal offsets
  morpheus_ccl_set_diagonal_offests_at_dia(A, 0, -2);
  morpheus_ccl_set_diagonal_offests_at_dia(A, 1, 0);
  morpheus_ccl_set_diagonal_offests_at_dia(A, 2, 1);
  // First Diagonal
  morpheus_ccl_set_values_at_dia(A, 0, 0, -1);
  morpheus_ccl_set_values_at_dia(A, 1, 0, -1);
  morpheus_ccl_set_values_at_dia(A, 2, 0, 40);
  morpheus_ccl_set_values_at_dia(A, 3, 0, 60);
  // Second Diagonal
  morpheus_ccl_set_values_at_dia(A, 0, 1, 10);
  morpheus_ccl_set_values_at_dia(A, 1, 1, 0);
  morpheus_ccl_set_values_at_dia(A, 2, 1, 50);
  morpheus_ccl_set_values_at_dia(A, 3, 1, -2);
  // Third Diagonal
  morpheus_ccl_set_values_at_dia(A, 0, 2, 20);
  morpheus_ccl_set_values_at_dia(A, 1, 2, 30);
  morpheus_ccl_set_values_at_dia(A, 2, 2, -3);
  morpheus_ccl_set_values_at_dia(A, 3, 2, -3);
  
  return A;
}

int main() {
  morpheus_ccl_initialize_without_args();
  { 
    // Reference Matrix
    //    [10 20 00]
    //    [00 00 30]
    //    [40 00 50]
    //    [00 60 00]
    
    coo *refcoo = ref_coo();
    csr *refcsr = ref_csr();
    dia *refdia = ref_dia();
    
    { 
      mirror_coo *mirror = morpheus_ccl_create_mirror_mat_coo_serial(refcoo);
      coo *shallow_mirror = morpheus_ccl_create_mirror_container_mat_coo_serial(refcoo);

      morpheus_ccl_copy_mat_coo_to_mat_coo_hostmirror_serial(refcoo, mirror);
      morpheus_ccl_copy_mat_coo_to_mat_coo_hostmirror_serial(refcoo, shallow_mirror);

      morpheus_ccl_set_values_at_coo(refcoo, 5, -15);
      morpheus_ccl_print_mat_coo(mirror);
      morpheus_ccl_print_mat_coo(shallow_mirror);
      morpheus_ccl_set_values_at_coo(refcoo, 5, 60);
      
      morpheus_ccl_destroy_mat_coo(&mirror);
      morpheus_ccl_destroy_mat_coo(&shallow_mirror);
    }

    { 
      mirror_csr *mirror = morpheus_ccl_create_mirror_mat_csr_serial(refcsr);

      morpheus_ccl_copy_mat_csr_to_mat_csr_hostmirror_serial(refcsr, mirror);
      morpheus_ccl_set_values_at_csr(refcsr, 5, -15);
      morpheus_ccl_print_mat_csr(mirror);
      morpheus_ccl_set_values_at_csr(refcsr, 5, 60);
      morpheus_ccl_destroy_mat_csr(&mirror);
    }

    { 
      mirror_dia *mirror = morpheus_ccl_create_mirror_mat_dia_serial(refdia);

      morpheus_ccl_copy_mat_dia_to_mat_dia_hostmirror_serial(refdia, mirror);
      morpheus_ccl_set_values_at_dia(refdia, 3, 0, -15);
      morpheus_ccl_print_mat_dia(mirror);
      morpheus_ccl_set_values_at_dia(refdia, 3, 0, 60);
      morpheus_ccl_destroy_mat_dia(&mirror);
    }

    {
      dyn *A;
      morpheus_ccl_create_mat_dyn_from_mat(refcsr, CSR_FORMAT, &A);
      mirror_dyn *mirror = morpheus_ccl_create_mirror_mat_dyn_serial(A);

      morpheus_ccl_copy_mat_csr_to_mat_dyn_hostmirror_serial(refcsr, mirror);
      morpheus_ccl_set_values_at_csr(refcsr, 5, -15);
      morpheus_ccl_print_mat_dyn(mirror);
      morpheus_ccl_set_values_at_csr(refcsr, 5, 60);

      morpheus_ccl_destroy_mat_dyn(&A);
      morpheus_ccl_destroy_mat_dyn(&mirror);
    }

    morpheus_ccl_destroy_mat_coo(&refcoo);
    morpheus_ccl_destroy_mat_csr(&refcsr);
    morpheus_ccl_destroy_mat_dia(&refdia);
    
  }
  morpheus_ccl_finalize();

  return 0;
}
