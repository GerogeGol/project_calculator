#ifndef CALCULATOR_CONVERTION_EXPRESSION_H
#define CALCULATOR_CONVERTION_EXPRESSION_H
#include "../variable_tree/variable_tree.h"

#define SIZE_STRING 1000
#define SIZE_VAR 100


void format_line(char *buf, char *str);

void parsing(BinaryTree *tree, char *str);

char *read_from_console(BinaryTree *tree);

#endif