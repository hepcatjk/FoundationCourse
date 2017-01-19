#include_directories()

set(GEOMETRY_SRCS
   shape.h shape.cpp
   rectangle.h rectangle.cpp
   triangle.h triangle.cpp
)

SET (LIB_TYPE STATIC)

add_library (geometry ${LIB_TYPE} ${GEOMETRY_SRCS})