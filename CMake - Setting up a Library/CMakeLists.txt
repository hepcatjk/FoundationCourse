cmake_minimum_required(VERSION 2.8.9)
project (GeometryTester)

set(GEOMETRY_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/geometry)

add_subdirectory(geometry)


include_directories(${GEOMETRY_INCLUDE_DIR})
add_executable(tester main.cpp)

target_link_libraries(tester geometry)
ADD_DEPENDENCIES(tester geometry)