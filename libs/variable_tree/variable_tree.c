#include "variable_tree.h"

#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

TreeNode *new_node(char key[VARIABLE_NAME_LENGTH], double value)
{
    TreeNode *node = (TreeNode *)calloc(1, sizeof(TreeNode));
    strcpy(node->item.name, key);
    node->item.value = value;
    return node;
}

void SetBinaryTree(BinaryTree *tree)
{
    tree->root = NULL;
}

int IsLeaf(TreeNode *node)
{
    return !node->right && !node->left;
}

TreeNode *_Add2Tree(TreeNode *root, char key[VARIABLE_NAME_LENGTH], double value)
{
    if (!root) {
        root = new_node(key, value);
        return root;
    }

    int cmp_res = strcmp(root->item.name, key);
    if (cmp_res > 0)
        root->left = _Add2Tree(root->left, key, value);
    else
        root->right = _Add2Tree(root->right, key, value);

    return root;
}

void AddElement2Tree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH], double value)
{
    tree->root = _Add2Tree(tree->root, key, value);
}

double _GetValue(TreeNode *node, char key[VARIABLE_NAME_LENGTH])
{
    int cmp_res = strcmp(node->item.name, key);
    if (cmp_res == 0)
        return node->item.value;

    if (cmp_res > 0)
        return _GetValue(node->left, key);
    else
        return _GetValue(node->right, key);
}

double GetValueFromTree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH])
{
    return _GetValue(tree->root, key);
}

BinaryTree *new_variable_tree()
{
    BinaryTree *tree = (BinaryTree *)malloc(sizeof(BinaryTree));
    AddElement2Tree(tree, "PI", M_PI);
    AddElement2Tree(tree, "e", M_E);
    return tree;
}
