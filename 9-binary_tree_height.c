#include "binary_trees.h"

/**
 * binary_tree_height - measures binary tree height.
 *@tree: pointer of root node of the tree to measure the height.
 * Return: 0 if tree is NULL otherwise height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int binary_tree_left = 0, binary_tree_right = 0;

	if (tree)
	{
		if (tree->right)
		{
			binary_tree_right = 1 + binary_tree_height(tree->right);
		}
		if (tree->left)
		{
			binary_tree_left = 1 + binary_tree_height(tree->left);
		}
		if (binary_tree_left > binary_tree_right)
		{
			return (binary_tree_left);
		}
		else
		{
			return (binary_tree_right);
		}
	}
	return (0);
}
