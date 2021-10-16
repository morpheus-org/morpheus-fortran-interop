/**
 * Morpheus_Ccl_Copy.cpp
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

#include <Morpheus_Ccl_Copy.hpp>

// coo -> coo
void morpheus_ccl_copy_hmat_coo_to_hmat_coo(const ccl_hmat_coo* src,
                                            ccl_hmat_coo* dst) {
  Morpheus::copy(*src, *dst);
}

// coo -> coo_hostmirror
void morpheus_ccl_copy_hmat_coo_to_hmat_coo_hostmirror(
    const ccl_hmat_coo* src, ccl_hmat_coo_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// coo_hostmirror -> coo
void morpheus_ccl_copy_hmat_coo_hostmirror_to_hmat_coo(
    const ccl_hmat_coo_hostmirror* src, ccl_hmat_coo* dst) {
  Morpheus::copy(*src, *dst);
}

// coo_hostmirror -> coo_hostmirror
void morpheus_ccl_copy_hmat_coo_hostmirror_to_hmat_coo_hostmirror(
    const ccl_hmat_coo_hostmirror* src, ccl_hmat_coo_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// csr -> csr
void morpheus_ccl_copy_hmat_csr_to_hmat_csr(const ccl_hmat_csr* src,
                                            ccl_hmat_csr* dst) {
  Morpheus::copy(*src, *dst);
}

// csr -> csr_hostmirror
void morpheus_ccl_copy_hmat_csr_to_hmat_csr_hostmirror(
    const ccl_hmat_csr* src, ccl_hmat_csr_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// csr_hostmirror -> csr
void morpheus_ccl_copy_hmat_csr_hostmirror_to_hmat_csr(
    const ccl_hmat_csr_hostmirror* src, ccl_hmat_csr* dst) {
  Morpheus::copy(*src, *dst);
}

// csr_hostmirror -> csr_hostmirror
void morpheus_ccl_copy_hmat_csr_hostmirror_to_hmat_csr_hostmirror(
    const ccl_hmat_csr_hostmirror* src, ccl_hmat_csr_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dia -> dia
void morpheus_ccl_copy_hmat_dia_to_hmat_dia(const ccl_hmat_dia* src,
                                            ccl_hmat_dia* dst) {
  Morpheus::copy(*src, *dst);
}

// dia -> dia_hostmirror
void morpheus_ccl_copy_hmat_dia_to_hmat_dia_hostmirror(
    const ccl_hmat_dia* src, ccl_hmat_dia_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dia_hostmirror -> dia
void morpheus_ccl_copy_hmat_dia_hostmirror_to_hmat_dia(
    const ccl_hmat_dia_hostmirror* src, ccl_hmat_dia* dst) {
  Morpheus::copy(*src, *dst);
}

// dia_hostmirror -> dia_hostmirror
void morpheus_ccl_copy_hmat_dia_hostmirror_to_hmat_dia_hostmirror(
    const ccl_hmat_dia_hostmirror* src, ccl_hmat_dia_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// mat dense -> mat dense
void morpheus_ccl_copy_hmat_dense_to_hmat_dense(const ccl_hmat_dense* src,
                                                ccl_hmat_dense* dst) {
  Morpheus::copy(*src, *dst);
}

// mat dense -> mat dense_hostmirror
void morpheus_ccl_copy_hmat_dense_to_hmat_dense_hostmirror(
    const ccl_hmat_dense* src, ccl_hmat_dense_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// mat dense_hostmirror -> mat dense
void morpheus_ccl_copy_hmat_dense_hostmirror_to_hmat_dense(
    const ccl_hmat_dense_hostmirror* src, ccl_hmat_dense* dst) {
  Morpheus::copy(*src, *dst);
}

// mat dense_hostmirror -> mat dense_hostmirror
void morpheus_ccl_copy_hmat_dense_hostmirror_to_hmat_dense_hostmirror(
    const ccl_hmat_dense_hostmirror* src, ccl_hmat_dense_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// vec dense -> vec dense
void morpheus_ccl_copy_hvec_dense_to_hvec_dense(const ccl_hvec_dense* src,
                                                ccl_hvec_dense* dst) {
  Morpheus::copy(*src, *dst);
}

// vec dense -> vec dense_hostmirror
void morpheus_ccl_copy_hvec_dense_to_hvec_dense_hostmirror(
    const ccl_hvec_dense* src, ccl_hvec_dense_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// vec dense_hostmirror -> vec dense
void morpheus_ccl_copy_hvec_dense_hostmirror_to_hvec_dense(
    const ccl_hvec_dense_hostmirror* src, ccl_hvec_dense* dst) {
  Morpheus::copy(*src, *dst);
}

// vec dense_hostmirror -> vec dense_hostmirror
void morpheus_ccl_copy_hvec_dense_hostmirror_to_hvec_dense_hostmirror(
    const ccl_hvec_dense_hostmirror* src, ccl_hvec_dense_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> dyn
void morpheus_ccl_copy_hmat_dyn_to_hmat_dyn(const ccl_hmat_dyn* src,
                                            ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> dyn_hostmirror
void morpheus_ccl_copy_hmat_dyn_to_hmat_dyn_hostmirror(
    const ccl_hmat_dyn* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> dyn
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_dyn(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> dyn_hostmirror
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_dyn_hostmirror(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// coo -> dyn
void morpheus_ccl_copy_hmat_coo_to_hmat_dyn(const ccl_hmat_coo* src,
                                            ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> coo
void morpheus_ccl_copy_hmat_dyn_to_hmat_coo(const ccl_hmat_dyn* src,
                                            ccl_hmat_coo* dst) {
  Morpheus::copy(*src, *dst);
}

// coo_hostmirror -> dyn
void morpheus_ccl_copy_hmat_coo_hostmirror_to_hmat_dyn(
    const ccl_hmat_coo_hostmirror* src, ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> coo_hostmirror
void morpheus_ccl_copy_hmat_dyn_to_hmat_coo_hostmirror(
    const ccl_hmat_dyn* src, ccl_hmat_coo_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// coo -> dyn_hostmirror
void morpheus_ccl_copy_hmat_coo_to_hmat_dyn_hostmirror(
    const ccl_hmat_coo* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> coo
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_coo(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_coo* dst) {
  Morpheus::copy(*src, *dst);
}

// coo_hostmirror -> dyn_hostmirror
void morpheus_ccl_copy_hmat_coo_hostmirror_to_hmat_dyn_hostmirror(
    const ccl_hmat_coo_hostmirror* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> coo_hostmirror
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_coo_hostmirror(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_coo_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// csr -> dyn
void morpheus_ccl_copy_hmat_csr_to_hmat_dyn(const ccl_hmat_csr* src,
                                            ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> csr
void morpheus_ccl_copy_hmat_dyn_to_hmat_csr(const ccl_hmat_dyn* src,
                                            ccl_hmat_csr* dst) {
  Morpheus::copy(*src, *dst);
}

// csr_hostmirror -> dyn
void morpheus_ccl_copy_hmat_csr_hostmirror_to_hmat_dyn(
    const ccl_hmat_csr_hostmirror* src, ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> csr_hostmirror
void morpheus_ccl_copy_hmat_dyn_to_hmat_csr_hostmirror(
    const ccl_hmat_dyn* src, ccl_hmat_csr_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// csr -> dyn_hostmirror
void morpheus_ccl_copy_hmat_csr_to_hmat_dyn_hostmirror(
    const ccl_hmat_csr* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> csr
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_csr(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_csr* dst) {
  Morpheus::copy(*src, *dst);
}

// csr_hostmirror -> dyn_hostmirror
void morpheus_ccl_copy_hmat_csr_hostmirror_to_hmat_dyn_hostmirror(
    const ccl_hmat_csr_hostmirror* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> csr_hostmirror
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_csr_hostmirror(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_csr_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dia -> dyn
void morpheus_ccl_copy_hmat_dia_to_hmat_dyn(const ccl_hmat_dia* src,
                                            ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> dia
void morpheus_ccl_copy_hmat_dyn_to_hmat_dia(const ccl_hmat_dyn* src,
                                            ccl_hmat_dia* dst) {
  Morpheus::copy(*src, *dst);
}

// dia_hostmirror -> dyn
void morpheus_ccl_copy_hmat_dia_hostmirror_to_hmat_dyn(
    const ccl_hmat_dia_hostmirror* src, ccl_hmat_dyn* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn -> dia_hostmirror
void morpheus_ccl_copy_hmat_dyn_to_hmat_dia_hostmirror(
    const ccl_hmat_dyn* src, ccl_hmat_dia_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dia -> dyn_hostmirror
void morpheus_ccl_copy_hmat_dia_to_hmat_dyn_hostmirror(
    const ccl_hmat_dia* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> dia
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_dia(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_dia* dst) {
  Morpheus::copy(*src, *dst);
}

// dia_hostmirror -> dyn_hostmirror
void morpheus_ccl_copy_hmat_dia_hostmirror_to_hmat_dyn_hostmirror(
    const ccl_hmat_dia_hostmirror* src, ccl_hmat_dyn_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}

// dyn_hostmirror -> dia_hostmirror
void morpheus_ccl_copy_hmat_dyn_hostmirror_to_hmat_dia_hostmirror(
    const ccl_hmat_dyn_hostmirror* src, ccl_hmat_dia_hostmirror* dst) {
  Morpheus::copy(*src, *dst);
}
