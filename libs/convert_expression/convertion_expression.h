//
// Created by ILYA && IGOR AKA 17;44 5;2;2022
//

#ifndef CALCULATOR_CONVERTION_EXPRESSION_H
#define CALCULATOR_CONVERTION_EXPRESSION_H

#define SIZE_STRING 1000
#define SIZE_VAR 100

typedef struct variable {
    char name[SIZE_VAR];
    double value;
} variable;

void formatFirstLine();

char *ReadFromConsole();

char *ReadFromFile();

#endif //CALCULATOR_CONVERTION_EXPRESSION_H
