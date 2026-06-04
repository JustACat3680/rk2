cmake_minimum_required(VERSION 3.31)
set(CMAKE_CXX_STANDARD 17)
project(state)
enable_testing()
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)
add_executable(state state.cpp)
add_executable(test1 test.cpp)
target_link_libraries(test1 PRIVATE gtest gtest_main)
target_include_directories(state PUBLIC include)
target_include_directories(test1 PUBLIC include)
include(GoogleTest)
gtest_discover_tests(test1)
