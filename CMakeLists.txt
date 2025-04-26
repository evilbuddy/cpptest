cmake_minimum_required(VERSION 3.10)
project(cpptest)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

add_executable(cpptest main.cpp)
target_link_libraries(cpptest PkgConfig::GTK4)
