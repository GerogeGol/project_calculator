//Наши либы
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
    printf("%d", StackIsEmpty(&stack));
    char expression[N] = "122+5*2";
    Stack stack_expression = to_notation(expression);
    PrintStack(&stack_expression);
    return 0;
}
