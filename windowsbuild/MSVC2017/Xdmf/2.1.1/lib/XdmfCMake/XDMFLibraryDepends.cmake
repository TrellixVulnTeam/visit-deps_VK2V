# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" GREATER 2.4)
  # Information for CMake 2.6 and above.
  SET("Xdmf_LIB_DEPENDS" "general;hdf5.lib;general;vtklibxml2-8.1.lib;general;zlib.lib;")
else()
  # Information for CMake 2.4 and lower.
  SET("Xdmf_LIB_DEPENDS" "hdf5.lib;vtklibxml2-8.1.lib;zlib.lib;")
endif()
