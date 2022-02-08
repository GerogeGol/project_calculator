#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H

#include "../stack/stack.h"
#include "../variable_tree/variable_tree.h"

double Plus(double num1, double num2);
double Minus(double num1, double num2);
double Multiple(double num1, double num2);
double Division(double num1, double num2);
double unarMinus(double x);
double Pow(double num1, double num2);
double Operation(double num1, double num2, double (*pred)(double, double));
int operation_choosen(const char* var);
double Calculation(Stack* stack, BinaryTree* tree_calc);

#endif  // CALCULATOR_CALCULATION_H
