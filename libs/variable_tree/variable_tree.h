#ifndef VARIABLETREE_H
#define VARIABLETREE_H

#define VARIABLE_NAME_LENGTH 100
typedef struct Node {
    char key[VARIABLE_NAME_LENGTH];
    double value;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct BinaryTree {
    Node *root;
} BinaryTree;

Node *new_node(char key[VARIABLE_NAME_LENGTH], double value);

void AddElement2Tree(BinaryTree tree, char key[VARIABLE_NAME_LENGTH], double value);
double GetValueFromTree(BinaryTree tree, char key[VARIABLE_NAME_LENGTH]);

BinaryTree *new_variable_tree();
#endif