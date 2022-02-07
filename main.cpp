#define _CRT_SECURE_NO_WARNINGS
//Наши либы
#include "calculation.h"
#include "convertion_expression.h"
#include "notation.h"
#include "stack.h"
#include "variable_tree.h"

//
#include "stdio.h"
#include "stdlib.h"
#define N 100

//кек лол арбидол
//кек лол арбидол
//кек лол арбидол
//кек лол арбидол

int main(int argc, char const *argv[])
{
    FILE *input_file;
    input_file = fopen("../input.txt", "rt");
    FILE *output;
    output = fopen("../output.txt", "wt");
    BinaryTree tree;
    Stack input;
    char buf[SIZE_STRING];
    while (fgets(buf, SIZE_STRING, input_file)) {
        char str[SIZE_STRING];
        format_line(buf, str);
        AddELement2Stack(&input, str);
    }
    PrintStack(&input);

    char ex[SIZE_STRING];
    PopElementStack(&input, ex);
    while (!StackIsEmpty(&input)) {

        parsing(&tree, ex);
        PopElementStack(&input, ex);
    }
    Stack stack_expression = to_notation(ex);
    PrintStack(&stack_expression);
    Calculation(&stack_expression, &tree);
    return 0;
}

int main2(int argc, char const *argv[])
{
    printf("test");
    BinaryTree tree;
    AddElement2Tree(&tree, "ad", 26);
    AddElement2Tree(&tree, "d", 3);

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
    // char expression[N] = "(abc+xxx*2)/(z^3*(asd-50))";
    char expression[N] = "(ad+d*2)/(2^3*(51-50))";
    // char expression[N] = "-2+2";

    Stack stack_expression = to_notation(expression);
    PrintStack(&stack_expression);

    Calculation(&stack_expression, &tree);

    return 0;
}