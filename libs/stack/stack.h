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
void PopElementStack(Stack *stack, char *dest);
void GetTopElementStack(Stack *stack, char *dest);
void PrintStack(Stack *stack);
int StackIsEmpty(Stack *stack);

// NumericStack
typedef struct NumericDoubleLinkedNode {
    double item;
    struct NumericDoubleLinkedNode *prev = NULL;
    struct NumericDoubleLinkedNode *next = NULL;
} NDLNode;

typedef struct NumericStack {
    NDLNode *start = NULL;
    NDLNode *end = NULL;
} NumericStack;

void AddELement2NumStack(NumericStack *stack, double item);
double PopElementNumStack(NumericStack *stack);
double GetTopElementNumStack(NumericStack *stack);
void PrintNumStack(NumericStack *stack);
int NumStackIsEmpty(NumericStack *stack);

#endif