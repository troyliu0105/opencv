// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.

#ifndef OPENCV_DNN_SRC_CUDA4DNN_KERNELS_CROP_AND_RESIZE_HPP
#define OPENCV_DNN_SRC_CUDA4DNN_KERNELS_CROP_AND_RESIZE_HPP

#include "../csl/stream.hpp"
#include "../csl/tensor.hpp"
#include "../csl/span.hpp"

namespace stcv{} namespace cv = stcv; namespace stcv { namespace dnn { namespace cuda4dnn { namespace kernels {

    template <class T>
    void crop_and_resize(const csl::Stream& stream, csl::TensorSpan<T> output, csl::TensorView<T> input, csl::View<T> boxes);

}}}} /* namespace stcv{} namespace cv = stcv; namespace stcv::dnn::cuda4dnn::kernels */

#endif /* OPENCV_DNN_SRC_CUDA4DNN_KERNELS_CROP_AND_RESIZE_HPP */
