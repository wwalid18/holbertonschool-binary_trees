#include "binary_trees.h"

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
		left_height = binary_tree_height(tree->left);
		left_height++;
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
		right_height++;
	}
	return (left_height - right_height);
}
