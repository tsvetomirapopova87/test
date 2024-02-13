add_library(DynamicLib SHARED
  "DynamicLib.cpp"
 "DynamicLib.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET DynamicLib PROPERTY CXX_STANDARD 20)
endif()
#find_package(Boost REQUIRED)
#target_link_libraries(DynamicLib PRIVATE Boost::headers)