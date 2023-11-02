#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *@tree: pointer of root node of the tree to measure the size.
 * Return: 0 on tree is NULL, otherwise size of tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t node_left = binary_tree_size(tree->left),
		node_right = binary_tree_size(tree->right);

	return (1 + node_left + node_right);
}
