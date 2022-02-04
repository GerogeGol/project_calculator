#include "stack.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

DLNode *new_DLNode(char item[ITEM_NAME_SIZE])
{
    DLNode *new_node = (DLNode *)malloc(sizeof(DLNode));
    memset(new_node->item, 0, sizeof(new_node->item));
    strcpy(new_node->item, item);
    // new_node->prev = NULL;
    // new_node->next = NULL;
    return new_node;
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

void PrintStack(Stack *stack)
{
    if (StackIsEmpty(stack))
        return;

    DLNode *node = stack->start;
    while (node) {
        printf("%s ", node->item);
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
    NDLNode *new_node = (NDLNode *)malloc(sizeof(NDLNode));
    new_node->item = item;
    return new_node;
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

void PrintNumStack(NumericStack *stack)
{
    NDLNode *node = stack->start;
    while (node)
        printf("%f ", node->item);
    printf("\n");
}

int NumStackIsEmpty(NumericStack *stack)
{
    return !(stack->start) && !(stack->end);
}