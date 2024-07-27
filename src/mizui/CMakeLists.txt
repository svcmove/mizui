cmake_minimum_required(VERSION 3.21)

add_executable(mizui)
target_sources(mizui PRIVATE
     program.cpp
)
target_link_libraries(mizui PRIVATE shared)
