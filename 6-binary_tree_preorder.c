#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree using pre-order traversal.
 *@tree: pointer of root node of the tree to traverse.
 *@func: pointer of function to callback for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->number);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
