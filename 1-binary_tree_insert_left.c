#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a child node to the left
 *
 * @parent: parent node
 * @value: value of child node
 *
 * Return: Created node; otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->right = NULL;
	node->parent = parent;
	node->left = parent->left;

	if (node->left)
		node->left->parent = node;

	parent->left = node;

	return (node);
}
