#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with
 * at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + left_count + right_count);
	else
		return (left_count + right_count);
}
