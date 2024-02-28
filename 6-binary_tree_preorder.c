#include "binary_trees.h"
/**
 * binary_tree_preorder - Function goes through a binary tree using pre-order traversal
 * @tree: Tree
 *
 * Return: Void
 */
void binary_tree_preorder(const Node *tree, void (*func)(int))
{
        if (tree == NULL || func == NULL)
                return;
        func(tree->value);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
}
