#include "binary_trees.h"

size_t find_number_of_nodes_left(const binary_tree_t *tree, size_t size);
size_t find_number_of_nodes_right(const binary_tree_t *tree, size_t size);
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	const binary_tree_t *temp = tree;

	size = find_number_of_nodes_left(temp, size);
	size = find_number_of_nodes_right(temp, size);
	return (size);
}

size_t find_number_of_nodes_left(const binary_tree_t *tree, size_t size)
{
	if (tree == NULL)
		return size;
	return (find_number_of_nodes_left(tree->left, size + 1));
}

size_t find_number_of_nodes_right(const binary_tree_t *tree, size_t size)
{
	if (tree == NULL)
		return size;
	return (find_number_of_nodes_right(tree->right, size + 1));
}