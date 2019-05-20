#
# \author: Arkadiusz Bubak arkadiusz@bubak.pl
# \date 2019.05.20
# \brief CMakeLists dla prac studentow
# v0.01

cmake_minimum_required(VERSION 2.8)
project(kcpp)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0 -Wno-unused-variable")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O0 -Wno-unused-variable")


#----------------------------------------------------------------------
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()
#----------------------------------------------------------------------


set(current_dir ${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB_RECURSE APP_SOURCES src/*.cc src/*.cpp)

foreach (sourcefile ${APP_SOURCES})
    #get filename without extension (NAME_(W)ethout(E)xtenction)
    get_filename_component(itempath ${sourcefile} DIRECTORY)
    get_filename_component(filename ${sourcefile} NAME)
    #message(STATUS "CSD: ${current_dir}")
    string(REPLACE "${current_dir}/src/" "" path ${itempath})
    #add executable for all file
    #string(CONCAT fname ${itempath} ${filename})
    set(fname ${path}_${filename})
    message(STATUS "FILENAME: ${fname}")
    add_executable(${fname} ${sourcefile})
endforeach (sourcefile ${APP_SOURCES})


