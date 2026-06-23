# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/SGA_Qt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SGA_Qt_autogen.dir/ParseCache.txt"
  "SGA_Qt_autogen"
  )
endif()
