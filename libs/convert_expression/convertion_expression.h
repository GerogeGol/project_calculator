#ifndef CALCULATOR_CONVERTION_EXPRESSION_H
#define CALCULATOR_CONVERTION_EXPRESSION_H

#define SIZE_STRING 1000
#define SIZE_VAR 100

typedef struct variable {
    char name[SIZE_VAR];
    double value;
} variable;

void format_first_line();

void format_variable_lines();

void read_from_console();

char *ReadFromFile();

#endif