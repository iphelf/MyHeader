cmake_minimum_required(VERSION 3.5)

project(MyHeader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(iphelf INTERFACE)
target_include_directories(iphelf INTERFACE ${CMAKE_SOURCE_DIR}/include)


enable_testing()

add_executable(test-enums test/enums.cpp)
add_test(NAME test-enums COMMAND test-enums)
target_link_libraries(test-enums PRIVATE iphelf)

add_executable(test-shared_ptr test/shared_ptr.cpp)
add_test(NAME test-shared_ptr COMMAND test-shared_ptr)
target_link_libraries(test-shared_ptr PRIVATE iphelf)
