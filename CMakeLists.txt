cmake_minimum_required (VERSION 3.10)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake-modules")

project(az_sdk_samples LANGUAGES C)

include(AddAzureSDKforC)

# Consuming Azure SDK for C from C99 app
add_subdirectory(helloAzure)

# Consuming Azure SDK for C from Cpp app
add_subdirectory(helloAzureFromCpp)

# using libcurl easy_send() and easy_recv()
add_subdirectory(poorManLibCurl)

