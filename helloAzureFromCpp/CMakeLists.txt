cmake_minimum_required (VERSION 3.10)

# Use az_core only with no HTTP or else
project (hello_azure LANGUAGES C)

project(helloAzureFromCpp LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable (
    helloAzureFromCpp
    src/main.cpp
)

target_link_libraries(helloAzureFromCpp PRIVATE az_core)
