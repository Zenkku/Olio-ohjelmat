cmake_minimum_required(VERSION 3.5)

project(Viikkotehvat2_1olioarvauspeli LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikkotehvat2_1olioarvauspeli main.cpp)

include(GNUInstallDirs)
install(TARGETS Viikkotehvat2_1olioarvauspeli
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
