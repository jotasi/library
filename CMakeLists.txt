cmake_minimum_required (VERSION 3.7)

project (sample_project_library
         LANGUAGES CXX
         VERSION 0.0.1)

add_library(sum STATIC src/sum.cpp)

set_target_properties(sum PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1)
target_include_directories(sum PRIVATE .)

enable_testing()
add_subdirectory(test)