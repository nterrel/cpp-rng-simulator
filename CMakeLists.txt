cmake_minimum_required(VERSION 3.16)
project(random_number LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Library
add_library(rng STATIC
    src/rng.cpp
)
target_include_directories(rng PUBLIC include)

# App
add_executable(random-number app/main.cpp)
target_link_libraries(random-number PRIVATE rng)

# Tests (optional; enable with -DBUILD_TESTING=ON)
include(CTest)
if(BUILD_TESTING)
  add_executable(rng_tests tests/rng_tests.cpp)
  target_link_libraries(rng_tests PRIVATE rng)
  add_test(NAME rng_tests COMMAND rng_tests)
endif()