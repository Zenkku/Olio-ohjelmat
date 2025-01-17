cmake_minimum_required(VERSION 3.5)

project(viikkotehtava1_1arvauspeli LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotehtava1_1arvauspeli main.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotehtava1_1arvauspeli
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
