#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root
 * Return: height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root
 * Return: size or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect, 0 if not or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, expected_nodes;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);
expected_nodes = (1 << height) - 1;

return (binary_tree_size(tree) == expected_nodes);
}
