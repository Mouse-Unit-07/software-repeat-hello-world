#--------------------------------- FILE INFO ----------------------------------#
# Filename           : CMakeLists.txt                                          #
#                                                                              #
# Top level CMakeLists.txt file                                                #
#                                                                              #
#------------------------------------------------------------------------------#
cmake_minimum_required(VERSION 4.0.2)
project(repeat_hello_world_lib LANGUAGES C)

include(FetchContent)

FetchContent_Declare(
    print_hello_world
    GIT_REPOSITORY https://github.com/Mouse-Unit-07/software-hello-world.git
    GIT_TAG main
)
FetchContent_MakeAvailable(print_hello_world)

# empty static library to start
add_library(repeat_hello_world_lib STATIC)

# ADD ALL SRC SUBDIRECTORIES HERE
add_subdirectory(repeat_hello_world)

target_include_directories(repeat_hello_world_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/repeat_hello_world
)

# Link to real implementation for production
target_link_libraries(repeat_hello_world_lib PUBLIC
    print_hello_world
)