#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 *
 * @parent: parent node
 * @value: value of child node
 *
 * Return: Created node; otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
