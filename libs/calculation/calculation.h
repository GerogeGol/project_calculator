#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H

#include "../notation/notation.h"
#include "../stack/stack.h"

double Plus(double num1, double num2);
double Minus(double num1, double num2);
double Multiple(double num1, double num2);
double Division(double num1, double num2);
double unarMinus(double x);
double Pow(double num1, double num2);
double Operation(double num1, double num2, double (*pred)(double, double));
int operation_choosen(const char* var);
void Calculation(Stack* stack);

#endif //CALCULATOR_CALCULATION_H
