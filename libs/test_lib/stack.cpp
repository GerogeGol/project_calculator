#include "stack.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

DLNode *new_DLNode(char item[ITEM_NAME_SIZE])
{
    DLNode *new_node = (DLNode *)malloc(sizeof(DLNode));
    strcpy(new_node->item, item);
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
}

void PopElementStack(Stack *stack, char dest[ITEM_NAME_SIZE])
{
    DLNode *del_node = stack->end;
    strcpy(dest, del_node->item);
    stack->end = del_node->prev;
    free(del_node);
    del_node = NULL;
}