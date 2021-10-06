/**
 * Fcl_C_DynamicMatrix.cpp
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

#include "Fcl_C_DynamicMatrix.hpp"

void c_morpheus_create_default_mat_dyn_r64_i32_r_h(
    fcl_mat_dyn_r64_i32_r_h** A) {
  *A = (new fcl_mat_dyn_r64_i32_r_h());
}

void c_morpheus_create_mat_dyn_from_mat_coo_r64_i32_r_h(
    fcl_mat_coo_r64_i32_r_h* src, fcl_mat_dyn_r64_i32_r_h** dst) {
  *dst = (new fcl_mat_dyn_r64_i32_r_h(fcl_mat_coo_r64_i32_r_h(*src)));
}

void c_morpheus_destroy_mat_dyn_r64_i32_r_h(fcl_mat_dyn_r64_i32_r_h** A) {
  delete (*A);
}

void c_morpheus_activate_mat_dyn_r64_i32_r_h(fcl_mat_dyn_r64_i32_r_h* A,
                                             const fcl_formats_e index) {
  A->activate(index);
}
