#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Struct for binary tree node
 *
 * @n: number to store in node
 * @parent: Pointer of parent node
 * @left: Pointer of left child node
 * @right: Pointer of right child node
 */
struct binary_tree_s
{
	int number;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent_node, int value);
void binary_tree_print(const binary_tree_t *);

#endif