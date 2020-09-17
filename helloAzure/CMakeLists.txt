cmake_minimum_required (VERSION 3.10)

# Use az_core only with no HTTP or else
project (hello_azure LANGUAGES C)

set(CMAKE_C_STANDARD 99)

add_executable (
    helloAzure
    src/main.c
)

target_link_libraries(helloAzure PRIVATE az_core)
