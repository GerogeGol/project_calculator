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

add_library(
    notation
    notation/notation.cpp
    notation/notation.h
)


target_include_directories(stack PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/stack")
target_include_directories(variable_tree PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/variable_tree")
target_include_directories(notation PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/notation")

