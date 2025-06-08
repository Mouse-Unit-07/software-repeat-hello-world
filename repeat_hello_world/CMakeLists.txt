#--------------------------------- FILE INFO ----------------------------------#
# Filename           : CMakeLists.txt                                          #
#                                                                              #
# CMakeLists.txt file for repeat_hello_world source files                      #
#                                                                              #
#------------------------------------------------------------------------------#
target_sources(repeat_hello_world_lib PRIVATE
    # \/ === ADD ALL .c SOURCE FILES HERE === \/
    ${CMAKE_CURRENT_LIST_DIR}/repeat_hello_world.c
)

target_include_directories(repeat_hello_world_lib PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)
