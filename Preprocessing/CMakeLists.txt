# CMakeList.txt : CMake project for LHF, include source and define
# project specific logic here.
#

cmake_minimum_required(VERSION 3.5)

add_library(preprocessor "preprocessor.cpp" "preprocessor.hpp")
add_library(kMeansPlusPlus "kMeansPlusPlus.cpp" "kMeansPlusPlus.hpp")
add_library(streamingKmeans "streamingKmeans.cpp" "streamingKmeans.cpp")
add_library(streamingUtils "streamingUtils.cpp" "streamingUtils.hpp")

include_directories(../Complex)
link_directories(../Complex)

include_directories(../Pipes)
link_directories(../Pipes)

include_directories(../Utils)
link_directories(../Utils)

target_link_libraries(preprocessor kMeansPlusPlus)
target_link_libraries(preprocessor streamingKmeans)
target_link_libraries(preprocessor streamingUtils)


INSTALL (TARGETS preprocessor
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib)

# TODO: Add tests and install targets if needed.

MESSAGE (STATUS "CMAKE_INCLUDE_PATH: " ${CMAKE_INCLUDE_PATH})
MESSAGE (STATUS "FLAGS: " ${CMAKE_CXX_FLAGS})
