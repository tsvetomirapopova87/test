
add_library(StaticLib STATIC
  "StaticLib.cpp"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET StaticLib PROPERTY CXX_STANDARD 20)
endif()
