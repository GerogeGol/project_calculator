#include "variable_tree.h"

#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

Node *new_node(char key[VARIABLE_NAME_LENGTH], double value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    strcpy(node->key, key);
    node->value = value;
    node->left = NULL;
    node->right = NULL;
}

void AddElement2Tree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH], double value)
{
    Node *node = tree->root;

    while (1) {
        int cmp_res = strcmp(node->key, key);

        if (cmp_res == 0) {
            node->value = value;
            return;
        }

        if (cmp_res > 0) {
            if (node->left == NULL) {
                node->left = new_node(key, value);
                return;
            }
            node = node->left;
        } else {
            if (node->right == NULL) {
                node->right = new_node(key, value);
                return;
            }
            node = node->right;
        }
    }
}

double GetValueFromTree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH])
{
    Node *node = tree->root;
    while (strcmp(node->key, key) != 0) {
        if (node == NULL)
            exit(-10);

        int cmp_res = strcmp(node->key, key);

        if (cmp_res > 0)
            node = node->left;
        else
            node = node->right;
    }
    return node->value;
}

BinaryTree *new_variable_tree()
{
    BinaryTree *tree = (BinaryTree *)malloc(sizeof(BinaryTree));
    AddElement2Tree(tree, "PI", M_PI);
    AddElement2Tree(tree, "e", M_E);
    return tree;
}