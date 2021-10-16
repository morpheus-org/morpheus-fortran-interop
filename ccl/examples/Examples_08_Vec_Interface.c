/**
 * Examples_08_hvec_Interface.c
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

typedef ccl_hvec_dense vec;

int main() {
  morpheus_ccl_initialize_without_args();
  {
    vec *x, *y, *w;

    morpheus_ccl_create_hvec_dense(&x, 10, 3);
    morpheus_ccl_create_hvec_dense(&y, 10, 5);
    morpheus_ccl_create_hvec_dense(&w, 10, 0);

    printf("<x,y> = %f\n", morpheus_ccl_dot_hvec_dense_hvec_dense(10, x, y));
    morpheus_ccl_waxpby_hvec_dense_hvec_dense(10, 1.0, x, 2.0, y, w);
    morpheus_ccl_print_hvec_dense(w);

    printf("Reduced(w) = %f\n", morpheus_ccl_reduce_hvec_dense_hvec_dense(w, 10));
    
    morpheus_ccl_assign_hvec_dense(y, 5, 2.5);

    morpheus_ccl_print_hvec_dense(y);

    ccl_index_t xsize = morpheus_ccl_size_hvec_dense(x);
    ccl_value_t* xdata = morpheus_ccl_data_hvec_dense(x);

    printf("x:: Size = %d\nx::vals::\n", xsize);
    for(int i=0; i<xsize; i++){
      printf("\t[%d] %3.1f\n", i, xdata[i]);
    }

    morpheus_ccl_resize_hvec_dense(x, 2);
    morpheus_ccl_print_hvec_dense(x);

    morpheus_ccl_resize_fill_hvec_dense(x, 9, -8.2);
    morpheus_ccl_print_hvec_dense(x);

    vec *z;
    
    morpheus_ccl_create_default_hvec_dense(&z);
    morpheus_ccl_allocate_hvec_dense_from_hvec_dense(y, z);
    morpheus_ccl_print_hvec_dense(z);

    morpheus_ccl_destroy_hvec_dense(&x);
    morpheus_ccl_destroy_hvec_dense(&y);
    morpheus_ccl_destroy_hvec_dense(&w);
    morpheus_ccl_destroy_hvec_dense(&z);
  }
  morpheus_ccl_finalize();

  return 0;
}
