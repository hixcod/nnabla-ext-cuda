// Copyright (c) 2017 Sony Corporation. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __NBLA_CUDA_MEMORY_HPP__
#define __NBLA_CUDA_MEMORY_HPP__

#include <memory>
#include <unordered_map>
#include <vector>

#include <nbla/array.hpp>
#include <nbla/common.hpp>
#include <nbla/cuda/defs.hpp>
#include <nbla/memory.hpp>

namespace nbla {

using std::vector;
using std::shared_ptr;

/** CUDA Memory
 */
class NBLA_CUDA_API CudaMemory : public Memory {
protected:
  int device_num_;

public:
  CudaMemory(Size_t bytes, const string &device);
  virtual bool allocate();
  virtual ~CudaMemory();
};
}
#endif
