/**
 * Fcl_C_CooMatrix.cpp
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

#include "Fcl_C_CooMatrix.hpp"

extern "C" {
    
    void c_morpheus_create_coomat_dirh(Morpheus::Fcl::coomat_r64_i32_r_h** A, Morpheus::Fcl::i32_t nrows, Morpheus::Fcl::i32_t ncols, Morpheus::Fcl::i32_t nnnz){
        *A = (new Morpheus::Fcl::coomat_r64_i32_r_h("coomat_dirh", nrows, ncols, nnnz));
    }

    void c_morpheus_create_coomat_dirh_from_dirh(Morpheus::Fcl::coomat_r64_i32_r_h* src, Morpheus::Fcl::coomat_r64_i32_r_h** dst){
        *dst = (new Morpheus::Fcl::coomat_r64_i32_r_h(*src));
    }

    void c_morpheus_destroy_coomat_dirh(Morpheus::Fcl::coomat_r64_i32_r_h** A){
        delete(*A);
    }

    void c_morpheus_print_coomat_dirh(Morpheus::Fcl::coomat_r64_i32_r_h* A)
    {
        Morpheus::print(*A);
    }

    void c_morpheus_multiply_coo_vec_vec_dirh_serial(Morpheus::Fcl::coomat_r64_i32_r_h *A, Morpheus::Fcl::vec_r64_i32_r_h *x, Morpheus::Fcl::vec_r64_i32_r_h *y)
    {
        Morpheus::multiply<Kokkos::Serial>(*A, *x, *y);
    }
}