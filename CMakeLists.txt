cmake_minimum_required(VERSION 3.0.0)
project(calculator VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(libs)
add_executable(calculator main.c)
target_link_libraries(calculator PUBLIC m stack variable_tree notation convert_expression calculation )


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(SOURCE_FILES main.c)
include(CPack)
