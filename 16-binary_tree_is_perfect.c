#include "binary_trees.h"

/**
 * binary_tree_height - Function measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

/*
 * binary_tree_is_perfect - Function checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t nodes = binary_tree_size(tree);

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Check if the tree is perfect */
	if (height == 0 && nodes == 1)
		return (1);
	else if (height == 0 && nodes != 1)
		return (0);

	/* Check if the tree is not perfect */
	if (nodes != (size_t)pow(2, height) - 1)
		return (0);
	return (1);
}
/**
 * binary_tree_size - Function measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, the function must return 0, else return size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (0);
}
