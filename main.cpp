// Наши либы
#include "stack.h"
#include "variable_tree.h"

// 
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
    printf("test");
    Stack stack;
    AddELement2Stack(&stack, "100");
    AddELement2Stack(&stack, "200");
    AddELement2Stack(&stack, "300");
    AddELement2Stack(&stack, "100");
    PrintStack(&stack);

    return 0;
    // lol
}
