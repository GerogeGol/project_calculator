// Наши либы
#include "notation.h"
#include "stack.h"
#include "variable_tree.h"
//
#include "stdio.h"
#include "stdlib.h"
#define N 100

int main(int argc, char const *argv[])
{
    printf("test");
    Stack stack;
    AddELement2Stack(&stack, "100");
    AddELement2Stack(&stack, "200");
    AddELement2Stack(&stack, "300");
    AddELement2Stack(&stack, "100");
    PrintStack(&stack);
    char expression[N] = "1+5*2";
    // Stack ex = to_notation(expression);
    return 0;
    // lol
}
