# ==============================================================================
# Copyright (C) 2022-2024 Intel Corporation
#
# SPDX-License-Identifier: MIT
# ==============================================================================

set(TARGET_NAME "gstdlstreamer_openvino")

add_library(${TARGET_NAME} SHARED register_elements.cpp)
set_compile_flags(${TARGET_NAME})

target_link_libraries(${TARGET_NAME}
PRIVATE
    logger
    dlstreamer_openvino
    dlstreamer_gst
)

install(TARGETS ${TARGET_NAME} DESTINATION ${DLSTREAMER_PLUGINS_INSTALL_PATH})
