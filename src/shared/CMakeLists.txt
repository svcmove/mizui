cmake_minimum_required(VERSION 3.21)

add_library(shared STATIC)
target_include_directories(shared PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:>
)

target_sources(shared PUBLIC
    decl.h
    core/application.cpp
    core/application.h
    core/assets_manager.cpp
    core/assets_manager.h

    vfs/path.h
)
target_link_libraries(shared PUBLIC fmt Boost::program_options)
