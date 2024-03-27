#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a child node to the right
 *
 * @parent: parent node
 * @value: value of child node
 *
 * Return: Created node; otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->parent = parent;
	node->right = parent->right;

	if (node->right)
		node->right->parent = node;

	parent->right = node;

	return (node);
}
