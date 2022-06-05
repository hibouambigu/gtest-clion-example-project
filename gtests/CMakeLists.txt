# subproject name
project(gtests)

# lib is the folder with gtest sources in it
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(gtests_run test1.cpp tests2.cpp)
target_link_libraries(gtests_run gtest gtest_main)