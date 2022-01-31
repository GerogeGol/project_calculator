#ifndef STACK_H
#define STACK_H

#define ITEM_NAME_SIZE 100
#define NULL 0LL

typedef struct DoubleLinkedNode {
    char item[ITEM_NAME_SIZE];
    struct DoubleLinkedNode *prev = NULL;
    struct DoubleLinkedNode *next = NULL;
} DLNode;

typedef struct Stack {
    DLNode *start = NULL;
    DLNode *end = NULL;
} Stack;

void AddELement2Stack(Stack *stack, char item[ITEM_NAME_SIZE]);
const char *PopElementStack(Stack *stack);
const char *GetTopElementStack(Stack *stack);
#endif