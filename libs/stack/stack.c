#include "stack.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

DLNode *new_DLNode(char item[ITEM_NAME_SIZE])
{
    DLNode *new_node = (DLNode *)calloc(1, sizeof(DLNode));
    strcpy(new_node->item, item);
    return new_node;
}

void SetStack(Stack *stack)
{
    stack->start = NULL;
    stack->end = NULL;
}

void ConnectDLNodes(DLNode *node_prev, DLNode *node)
{
    node_prev->next = node;
    node->prev = node_prev;
}

void AddELement2Stack(Stack *stack, char item[ITEM_NAME_SIZE])
{
    DLNode *node = new_DLNode(item);
    if (StackIsEmpty(stack)) {
        stack->start = node;
        stack->end = node;
        return;
    }
    ConnectDLNodes(stack->end, node);
    stack->end = node;
}

void PopElementStack(Stack *stack, char *dest)
{
    if (StackIsEmpty(stack)) {
        // exit(-10);
        strcpy(dest, "");
        return;
    }

    DLNode *del_node = stack->end;
    if (stack->end == stack->start) {
        stack->start = NULL;
        stack->end = NULL;
    }
    strcpy(dest, del_node->item);
    stack->end = del_node->prev;
    free(del_node);
}

void GetTopElementStack(Stack *stack, char *dest)
{
    if (StackIsEmpty(stack)) {
        strcpy(dest, "");
        return;
    }
    strcpy(dest, stack->end->item);
}

void PrintStack(Stack *stack, char *sep)
{
    if (StackIsEmpty(stack))
        return;

    DLNode *node = stack->start;
    while (node) {
        printf("%s%s", node->item, sep);
        node = node->next;
    }
    printf("\n");
}

int StackIsEmpty(Stack *stack)
{
    return !(stack->start) && !(stack->end);
}

// Numeric Stack

NDLNode *new_NDLNode(double item)
{
    NDLNode *new_node = (NDLNode *)calloc(1, sizeof(NDLNode));
    new_node->item = item;
    return new_node;
}
void SetNumericStack(NumericStack *stack)
{
    stack->start = NULL;
    stack->end = NULL;
}

void ConnectNDLNodes(NDLNode *node_prev, NDLNode *node)
{
    node_prev->next = node;
    node->prev = node_prev;
}

void AddELement2NumStack(NumericStack *stack, double item)
{
    NDLNode *node = new_NDLNode(item);
    if (NumStackIsEmpty(stack)) {
        stack->start = node;
        stack->end = node;
        return;
    }
    ConnectNDLNodes(stack->end, node);
    stack->end = node;
}

double PopElementNumStack(NumericStack *stack)
{
    if (NumStackIsEmpty(stack))
        exit(-10);

    NDLNode *del_node = stack->end;
    double value = del_node->item;

    if (stack->start = stack->end) {
        stack->start = NULL;
        stack->end = NULL;
    }
    stack->end = del_node->prev;
    free(del_node);
    return value;
}

double GetTopElementNumStack(NumericStack *stack)
{
    if (NumStackIsEmpty(stack))
        exit(-10);
    return stack->end->item;
}

void PrintNumStack(NumericStack *stack, char *sep)
{
    if (NumStackIsEmpty(stack))
        return;
    NDLNode *node = stack->start;
    while (node) {
        printf("%f%s", node->item, sep);
        node = node->next;
    }
    printf("\n");
}

int NumStackIsEmpty(NumericStack *stack)
{
    return !(stack->start) && !(stack->end);
}