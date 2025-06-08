#--------------------------------- FILE INFO ----------------------------------#
# Filename           : CMakeLists.txt                                          #
#                                                                              #
# CMakeLists.txt file for repeat_hello_world test files                        #
#                                                                              #
#------------------------------------------------------------------------------#
set(LOCAL_TEST_SOURCES
    # \/ === ADD ALL TEST SOURCE FILES HERE === \/
    ${CMAKE_CURRENT_SOURCE_DIR}/test_repeat_hello_world.cpp
    ${CMAKE_SOURCE_DIR}/src/repeat_hello_world/repeat_hello_world.c
    ${CMAKE_CURRENT_SOURCE_DIR}/mocks/hello_world/mock_print_hello_world.c
)

set(ALL_TEST_SOURCES
    ${ALL_TEST_SOURCES}
    ${LOCAL_TEST_SOURCES}
    PARENT_SCOPE
)

add_executable(test_repeat_hello_world
    ${LOCAL_TEST_SOURCES}
    ${CMAKE_SOURCE_DIR}/tests/test_main.cpp
)

target_include_directories(test_repeat_hello_world PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)


target_link_libraries(test_repeat_hello_world PRIVATE
    repeat_hello_world_lib
    CppUTest
    CppUTestExt
)

add_test(NAME test_repeat_hello_world COMMAND test_repeat_hello_world)
