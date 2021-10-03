/**
 * Fcl_C_CooMatrix.hpp
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

#ifndef FCL_C_COOMATRIX_HPP
#define FCL_C_COOMATRIX_HPP

#include <Morpheus_Core.hpp>

#include "Fcl_C_Types.hpp"
#include "Fcl_C_DenseVector.hpp"

namespace Morpheus {
namespace Fcl {

typedef CooMatrix<r64_t, i32_t, right_t, host_t> mat_coo_r64_i32_r_h;

}  // namespace Fcl
}  // namespace Morpheus

extern "C" {
void c_morpheus_create_mat_coo_r64_i32_r_h(
    Morpheus::Fcl::mat_coo_r64_i32_r_h** A, Morpheus::Fcl::i32_t nrows,
    Morpheus::Fcl::i32_t ncols, Morpheus::Fcl::i32_t nnnz);

void c_morpheus_create_mat_coo_from_mat_coo_r64_i32_r_h(
    Morpheus::Fcl::mat_coo_r64_i32_r_h* src,
    Morpheus::Fcl::mat_coo_r64_i32_r_h** dst);

void c_morpheus_destroy_mat_coo_r64_i32_r_h(
    Morpheus::Fcl::mat_coo_r64_i32_r_h** A);
}

#endif  // FCL_C_COOMATRIX_HPP