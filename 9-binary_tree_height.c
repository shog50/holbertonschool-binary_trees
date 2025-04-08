#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

/* A single node has height 0 */
if (tree->left == NULL && tree->right == NULL)
return (0);

/* Measure the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Return the greater height, adding 1 to include the current node */
return (1 + (left_height > right_height ? left_height : right_height));
}

