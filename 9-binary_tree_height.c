#include "binary_trees.h"

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

	if (tree)
	{
		while (temp->left)
		{
			temp = temp->left;
			height_left++;
		}

		temp = tree;

		while (temp->right)
		{
			temp = temp->right;
			height_right++;
		}
	}

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
