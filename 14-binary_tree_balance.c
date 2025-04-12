#include "binary_trees.h"
/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the node
 *
 * Return: height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (tree == NULL)
return (0);

left = tree_height(tree->left);
right = tree_height(tree->right);

return ((left > right ? left : right) +1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (tree_height(tree->left) - tree_height(tree->right));
}
