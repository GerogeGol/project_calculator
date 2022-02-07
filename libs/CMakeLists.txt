add_library(
    stack
    stack/stack.c
    stack/stack.h
)

add_library(
    variable_tree
    variable_tree/variable_tree.c
    variable_tree/variable_tree.h
)

add_library(
    notation
    notation/notation.c
    notation/notation.h
        )

add_library(
    convert_expression
    convert_expression/convertion_expression.c
    convert_expression/convertion_expression.h
)

add_library(
    calculation
    calculation/calculation.c
    calculation/calculation.h
    
)


target_include_directories(stack PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/stack")
target_include_directories(variable_tree PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/variable_tree")
target_include_directories(notation PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/notation")
target_include_directories(convert_expression PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/convert_expression")
target_include_directories(calculation PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/calculation")
