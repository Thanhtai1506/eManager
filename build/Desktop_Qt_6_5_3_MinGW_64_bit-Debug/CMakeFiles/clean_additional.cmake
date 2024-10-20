# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appeManager_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appeManager_autogen.dir\\ParseCache.txt"
  "appeManager_autogen"
  )
endif()
