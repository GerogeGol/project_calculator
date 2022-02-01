add_library(
    stack
    stack/stack.cpp
    stack/stack.h
)

add_library(
    variable_tree
    variable_tree/variable_tree.cpp
    variable_tree/variable_tree.h
)

target_include_directories(stack PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/stack")
target_include_directories(variable_tree PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/variable_tree")
