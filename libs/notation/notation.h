#ifndef NOTATION_H
#define NOTATION_H
#include "../stack/stack.h"

Stack to_notation(char ex[]);
void to_zero(char s[]);
void add_to_string(char s[], char ch);
int get_priority(char temp);
int not_operator(char i);
int operator(char i);
#endif