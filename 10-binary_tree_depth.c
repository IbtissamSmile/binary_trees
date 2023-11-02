#include "binary_trees.h"

/**
 * binary_tree_depth - depth of node in binary tree.
 *@tree: pointer of node to measure the depth.
 * Return: 0 on NULL, otherwise depth of binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
