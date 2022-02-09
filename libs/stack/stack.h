#ifndef STACK_H
#define STACK_H

#define ITEM_NAME_SIZE 100
#define NULL 0LL

typedef struct DoubleLinkedNode {
    char item[ITEM_NAME_SIZE];
    struct DoubleLinkedNode *prev;
    struct DoubleLinkedNode *next;
} DLNode;

typedef struct Stack {
    DLNode *start;
    DLNode *end;
} Stack;

void SetStack(Stack *stack);
void AddELement2Stack(Stack *stack, char item[ITEM_NAME_SIZE]);
void PopElementStack(Stack *stack, char *dest);
void GetTopElementStack(Stack *stack, char *dest);
void PrintStack(Stack *stack, char *sep);
int StackIsEmpty(Stack *stack);

// NumericStack
typedef struct NumericDoubleLinkedNode {
    double item;
    struct NumericDoubleLinkedNode *prev;
    struct NumericDoubleLinkedNode *next;
} NDLNode;

typedef struct NumericStack {
    NDLNode *start;
    NDLNode *end;
} NumericStack;

void SetNumericStack(NumericStack *stack);
void AddELement2NumStack(NumericStack *stack, double item);
double PopElementNumStack(NumericStack *stack);
double GetTopElementNumStack(NumericStack *stack);
void PrintNumStack(NumericStack *stack, char *sep);
int NumStackIsEmpty(NumericStack *stack);

#endif