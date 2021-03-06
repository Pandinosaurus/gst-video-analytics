/*******************************************************************************
 * Copyright (C) 2018-2021 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 ******************************************************************************/
#pragma once

#include "config.h"
#include "inference_backend/image.h"
#include <gst/gstbuffer.h>
#include <gst/video/video-info.h>

struct BufferMapContext {
    GstVideoFrame frame;
};

void gva_buffer_map(GstBuffer *buffer, InferenceBackend::Image &image, BufferMapContext &mapContext, GstVideoInfo *info,
                    InferenceBackend::MemoryType memoryType, GstMapFlags mapFlags);

void gva_buffer_unmap(BufferMapContext &mapContext);

int gst_format_to_fourcc(int format);
void fill_image_with_video_info(GstVideoInfo *info, InferenceBackend::Image &image);
