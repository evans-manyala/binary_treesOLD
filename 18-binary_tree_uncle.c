#include "binary_trees.h"
/**
 * binary_tree_uncle - Function finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL); // Handle NULL and invalid cases

	// Get the parent's sibling, which is the uncle of the node
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right); // Uncle is the right child of the grandparent
	else
		return (node->parent->parent->left); // Uncle is the left child of the grandparent
}
