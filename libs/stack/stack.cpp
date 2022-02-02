#include "stack.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

DLNode *new_DLNode(char item[ITEM_NAME_SIZE])
{
    DLNode *new_node = (DLNode *)malloc(sizeof(DLNode));
    memset(new_node->item, 0, sizeof(new_node->item));
    strcpy(new_node->item, item);
    new_node->prev = NULL;
    new_node->next = NULL;
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
    if (!(stack->end) && !(stack->start)) {
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
    del_node = NULL;
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
    DLNode *node = stack->start;
    while (node) {
        printf("%s ", node->item);
        node = node->next;
    }
}

int StackIsEmpty(Stack *stack)
{
    return !(stack->start) && !(stack->end);
}