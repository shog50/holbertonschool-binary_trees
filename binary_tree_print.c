#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_print - Minimal function to print a binary tree
* @tree: Pointer to the root node of the tree to print
*/
void binary_tree_print(const binary_tree_t *tree)
{
if (!tree)
return;

printf("%d\n", tree->n);

if (tree->left)
printf("Left of %d: %d\n", tree->n, tree->left->n);
if (tree->right)
printf("Right of %d: %d\n", tree->n, tree->right->n);

binary_tree_print(tree->left);
binary_tree_print(tree->right);
}

