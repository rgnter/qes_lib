cmake_minimum_required(VERSION 3.23)
project(qeslib)

set(CMAKE_CXX_STANDARD 20)

set(QESLIB_STATIC TRUE)
set(QESLIB_HEADERS
        include/qeslib/qeslib.hpp)
set(QESLIB_SOURCES
        )
add_library(qeslib
        ${QESLIB_HEADERS}
        ${QESLIB_SOURCES})


add_executable(qeslib_test
        )
