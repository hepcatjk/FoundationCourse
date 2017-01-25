CMAKE_MINIMUM_REQUIRED(VERSION 2.8.11)
PROJECT(ExternalLibraryTest)

##############################################################
# Output paths
##############################################################
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")



#Set the paths for external library variables
set(EIGEN_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/external/eigen)
set(TBB_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/external_dependencies/tbb/include)

 # Seems to be needed under MSYS2 and Apple but is automatically included on most systems
include(CheckCXXCompilerFlag)
  
# Add External Dependencies that are needed for the project.
add_subdirectory (external)  



include_directories(${EIGEN_INCLUDE_DIR} ${TBB_INCLUDE_DIR})
add_executable(tester main.cpp)

target_link_libraries(tester tbb_static)
ADD_DEPENDENCIES(tester tbb_static)