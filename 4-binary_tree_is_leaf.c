#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  Cecks if a node is a leaf.
 *@node: Pointer of node to check.
 * Return: 1 where node is a leaf, 0 on Success.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);
}
