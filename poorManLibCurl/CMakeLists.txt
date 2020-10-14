cmake_minimum_required (VERSION 3.10)

# Use az_core only with no HTTP or else
project (poor_man LANGUAGES C)

project(poor_man LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(CURL ${CURL_MIN_REQUIRED_VERSION} CONFIG)
if(NOT CURL_FOUND)
  find_package(CURL ${CURL_MIN_REQUIRED_VERSION} REQUIRED)
endif()

add_executable (
    poor_man
    src/main.cpp
)

target_link_libraries(poor_man PRIVATE CURL::libcurl)
