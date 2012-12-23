project(gameoflife)

cmake_minimum_required(VERSION 2.6.2)
################################
# GTest
################################
ADD_SUBDIRECTORY (gmock-1.6.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
################################
# QT
################################
FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})
################################
# boost
################################
FIND_PACKAGE( Boost 1.50 COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

################################
# Compiler thingies
################################

SET (CMAKE_C_COMPILER   "clang")
SET (CMAKE_CXX_COMPILER "clang++")
ADD_DEFINITIONS("-std=c++11 -Wall --pedantic -g") 

################################
# Unit Tests
################################
# Add test cpp file
set (gof_SRC cell.cc 
      board.cc 
      main.cc
      )
    add_executable( runUnitTests cell_test.cc ${gof_SRC})
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main 
                      ${QT_LIBRARIES}
                      ${Boost_LIBRARIES})
add_test( runUnitTests runUnitTests )
