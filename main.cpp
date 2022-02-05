//Наши либы
#include "notation.h"
#include "stack.h"
#include "variable_tree.h"
#include "calculation.h"

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
    printf("\n");

    char str[ITEM_NAME_SIZE];
    PopElementStack(&stack, str);
    printf("%s\n", str);
    PopElementStack(&stack, str);
    printf("%s\n", str);
    PopElementStack(&stack, str);
    printf("%s\n", str);
    PopElementStack(&stack, str);
    printf("%s\n", str);
    PopElementStack(&stack, str);
    printf("%s\n", str);

    PrintStack(&stack);
    printf("%d\n", StackIsEmpty(&stack));
    char expression[N] = "(abc+xxx*2)/(z^3*(asd-50))";

    Stack stack_expression = to_notation(expression);
    PrintStack(&stack_expression);
    Calculation(&stack_expression);

    return 0;
}
