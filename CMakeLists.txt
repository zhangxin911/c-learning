cmake_minimum_required(VERSION 3.0.0)
project(tools VERSION 0.1.0)


include(CTest)
enable_testing()

add_subdirectory(math Worker)
add_executable(tools main.cpp Config.h)
target_link_libraries(tools MathFunctions)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
