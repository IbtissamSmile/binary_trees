#include "binary_trees.h"

/**
 * binary_tree_insert_right - set node in right child of another node.
 *@parent: pointer node right-child.
 *@value: value of new node,
 * Return: Pointer of created node, or NULL on failure or if not defined node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent_node, int value)
{
	binary_tree_t *node = NULL;

	if (parent_node == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->number = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent_node;
	if (parent_node->right != NULL)
	{
		node->right = parent_node->right;
		parent_node->right = node;
		node->right->parent = node;
	}
	else
	{
		parent_node->right = node;
	}
	return (node);
}
