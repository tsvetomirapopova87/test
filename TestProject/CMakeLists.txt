﻿# CMakeList.txt : CMake project for TestProject, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (TestProject "TestProject.cpp" "TestProject.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TestProject PROPERTY CXX_STANDARD 20)
endif()


target_link_libraries(TestProject "StaticLib")
target_link_libraries(TestProject ${CMAKE_CACHEFILE_DIR}\\DynamicLib)
# TODO: Add tests and install targets if needed.
