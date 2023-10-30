#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node.
 *@parent_node: parent new node pointer.
 *@value: value of new node.
 * Return: pointer to the new node or NULL if no node defined.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent_node, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent_node;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->number = value;
	return (new_node);
}
