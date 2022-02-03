//
// Created by rusla on 03.02.2022.
//

#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H

#include "../notation/notation.h"

double Plus(double num1, num2);
double Minus(double num1, num2);
double Multiple(double num1, num2);
double Division(double num1, num2);
double unarMinus(double x);
double Pow(double num1, num2);
int operation_choosen(const char* var);
void Calculation(Stack* stack);

#endif //CALCULATOR_CALCULATION_H
