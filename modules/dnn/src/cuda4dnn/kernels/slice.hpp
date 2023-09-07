// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.

#ifndef OPENCV_DNN_SRC_CUDA4DNN_KERNELS_SLICE_HPP
#define OPENCV_DNN_SRC_CUDA4DNN_KERNELS_SLICE_HPP

#include "../csl/stream.hpp"
#include "../csl/tensor.hpp"

#include <cstddef>

namespace stcv{} namespace cv = stcv; namespace stcv { namespace dnn { namespace cuda4dnn { namespace kernels {

    template <class T>
    void slice(const csl::Stream& stream,
        csl::TensorSpan<T> output, csl::TensorView<T> input,
        std::vector<std::size_t> offsets);

}}}} /* namespace stcv{} namespace cv = stcv; namespace stcv::dnn::cuda4dnn::kernels */

#endif /* OPENCV_DNN_SRC_CUDA4DNN_KERNELS_SLICE_HPP */
