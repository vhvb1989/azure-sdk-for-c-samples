# Copyright (c) Microsoft Corporation. All rights reserved.
# SPDX-License-Identifier: MIT

include(FetchContent)
FetchContent_Declare(azuresdkforc
    GIT_REPOSITORY      https://github.com/Azure/azure-sdk-for-c.git
    GIT_TAG             1.0.0-preview.5)
FetchContent_GetProperties(azuresdkforc)
if(NOT azuresdkforc_POPULATED)
    FetchContent_Populate(azuresdkforc)
    add_subdirectory(${azuresdkforc_SOURCE_DIR} ${azuresdkforc_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()
