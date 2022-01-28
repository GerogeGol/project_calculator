#ifndef VARIABLETREE_H
#define VARIABLETREE_H

#define VARIABLE_NAME_LENGTH 100

typedef struct TreeNode {
    char key[VARIABLE_NAME_LENGTH];
    double value;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct BinaryTree {
    TreeNode *root;
} BinaryTree;

void AddElement2Tree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH], double value);
double GetValueFromTree(BinaryTree *tree, char key[VARIABLE_NAME_LENGTH]);

BinaryTree *new_variable_tree();
#endif