#define _CRT_SECURE_NO_WARNINGS
//Наши либы
#include "calculation.h"
#include "notation.h"
#include "stack.h"
#include "variable_tree.h"
#include "convertion_expression.h"
//
#include "stdio.h"
#include "stdlib.h"
#define N 100

//кек лол арбидол
//кек лол арбидол
//кек лол арбидол
//кек лол арбидол

int main()
{
    FILE *input_file;
    input_file = fopen("../input.txt", "rt");
    FILE *output;
    output = fopen("../output.txt", "wt");
    BinaryTree tree;
    Stack input;
    char buf[SIZE_STRING];
    while(fgets(buf, SIZE_STRING, input_file)) {
        char str[SIZE_STRING];
        format_line(buf, str);
        AddELement2Stack(&input, str);
    }
    PrintStack(&input);

    char ex[SIZE_STRING];
    PopElementStack(&input, ex);
    while(!StackIsEmpty(&input))
    {
        parsing(&tree, ex);
        PopElementStack(&input, ex);
    }
    Stack stack_expression = to_notation(ex);
    PrintStack(&stack_expression);
    Calculation(&stack_expression, &tree);
    return 0;
}