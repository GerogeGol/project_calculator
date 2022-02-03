#include "calculation.h"

#include "string.h"
#include "stdlib.h"

// + - ^ * / ~

double Plus(double num1, num2) {
    return num1 + num2;
}

double Minus(double num1, num2) {
    return num1 - num2;
}

double Multiple(double num1, num2) {
    return num1 * num2;
}

double Division(double num1, num2) {
    return num1 / num2;
}

double unarMinus(double x) {
    return -x;
}

double Pow(double num1, num2) {
    double res = 0;
    for (int i = 0; i < num2; i++) {
        res *= num1;
    }
    return res;
}


int operation_choosen(const char* var) {
    char operations[] = {"+", "-", "*", "^", "/", "%"};
    for (int i = 0; i < 6; i++) {
        if (!strcmp(var, operations[i])) {
            return i;
        }
    }
    return -1;
}

void Calculation(Stack* stack) {
    char operations[] = {"+", "-", "*", "^", "/", "%"};
    Stack result;
    DLNode *node = stack->start;

    while (node) {
        char input[20] = { 0 };
        int i = operation_choosen(input);
        if (i == -1) {
            AddELement2Stack(&result, strtod(input, node->item))
        }
        else {
            char number_one[20] = {0};
            PopElementStack(&result, number_one);
            double number1;
            strtod(number_one, number1);
            char number_two[20] = {0};
            PopElementStack(&result, number_two);
            double number2;
            strtod(number_two, number2);
        }

        node = node->next;
    }
}
