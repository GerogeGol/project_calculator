#ifndef NOTATION_H
#define NOTATION_H
#include "../stack/stack.h"
#include "../variable_tree/variable_tree.h"

Stack to_notation(char ex[]);
void to_zero(char s[]);
void add_to_string(char s[], char ch);

#endif