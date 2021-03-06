#ifndef VARIABLETREE_H
#define VARIABLETREE_H

#define VARIABLE_NAME_LENGTH 100
#define NULL 0LL
typedef struct Variable {
    char name[VARIABLE_NAME_LENGTH];
    double value;
} Variable;

typedef struct TreeNode {
    Variable item;
    // char key[VARIABLE_NAME_LENGTH];
    // double value;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct BinaryTree {
    TreeNode *root;
} BinaryTree;

void AddElement2Tree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH], double value);
double GetValueFromTree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH]);
void SetBinaryTree(BinaryTree *tree);

BinaryTree *new_variable_tree();
#endif