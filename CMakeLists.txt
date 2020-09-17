cmake_minimum_required (VERSION 3.10)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake-modules")

project(az_sdk_samples LANGUAGES C)

include(AddAzureSDK)

add_subdirectory(helloAzure)
