#--------------------------------- FILE INFO ----------------------------------#
# Filename           : CMakeLists.txt                                          #
#                                                                              #
# Top level CMakeLists.txt file                                                #
#                                                                              #
#------------------------------------------------------------------------------#
cmake_minimum_required(VERSION 4.0.2)
project(repeat_hello_world_lib LANGUAGES C)

include(FetchContent)

# \/ === ADD ALL GITHUB PROJECT DEPENDENCIES HERE === \/
FetchContent_Declare(
    print_hello_world
    GIT_REPOSITORY https://github.com/Mouse-Unit-07/software-hello-world.git
    GIT_TAG main
)
FetchContent_MakeAvailable(print_hello_world)

add_library(repeat_hello_world_lib STATIC)

# \/ === ADD SOURCE SUBDIRECTORIES HERE === \/
add_subdirectory(repeat_hello_world)
target_include_directories(repeat_hello_world_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/repeat_hello_world
)

# \/ === LINK TO GITHUB DEPENDENCIES HERE === \/
target_link_libraries(repeat_hello_world_lib PUBLIC
    hello_world_lib
)