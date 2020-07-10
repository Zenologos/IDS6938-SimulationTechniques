#include_directories()

set(GEOMETRY_SRCS
   vec3f.h vec3f.cpp
)

SET (LIB_TYPE STATIC)

add_library (geometry ${LIB_TYPE} ${GEOMETRY_SRCS})