#include "binary_trees.h"

size_t get_height_left(const binary_tree_t *tree, size_t height_left);
size_t get_height_right(const binary_tree_t *tree, size_t height_right);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;
	const binary_tree_t *temp = tree;

	height_left = get_height_left(temp->left, height_left);
	temp = tree;
	height_right = get_height_right(temp->right, height_right);

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

size_t get_height_left(const binary_tree_t *tree, size_t height_left)
{
	if (tree == NULL)
		return (height_left);

	return (get_height_left(tree->left, height_left + 1));
}

size_t get_height_right(const binary_tree_t *tree, size_t height_right)
{

	if (tree == NULL)
		return (height_right);

	return (get_height_left(tree->right, height_right + 1));
}
