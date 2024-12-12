#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + height(tree->right);
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}




/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node .
 * Return: The balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left_height = height(tree->left);
		left_height++;
	}
	if (tree->right != NULL)
	{
		right_height = height(tree->right);
		right_height++;
	}
	return (left_height - right_height);
}
