#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
int height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = height(tree->left);
	if (tree->right)
		right_height = height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */
int size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + size(tree->left) + size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hheight, ssize, expected_size;

	if (tree == NULL)
		return (0);
	hheight = height(tree);
	ssize = size(tree);
	expected_size = (1 << hheight) - 1;
	return (ssize == expected_size);
}
