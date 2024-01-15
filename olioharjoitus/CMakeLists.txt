cmake_minimum_required(VERSION 3.5)

project(olioharjoitus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olioharjoitus main.cpp)

include(GNUInstallDirs)
install(TARGETS olioharjoitus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
