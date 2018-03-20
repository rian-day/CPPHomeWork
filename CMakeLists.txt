cmake_minimum_required(VERSION 3.8)
project(cppHomeWork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Evlaute.cpp Evlaute.h printName.cpp printName.h Function.cpp Function.h Quote.cpp Quote.h overLoad.cpp overLoad.h Time.cpp Time.h sort.cpp sort.h)
add_executable(cppHomeWork ${SOURCE_FILES})