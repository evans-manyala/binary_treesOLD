/**
 * binary_tree_is_full - Function checks if binary tree is full
 *
 */
binary_tree_is_full(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->left == NULL && node->right == NULL)
        return (1);
    else if (node->left != NULL && node->right != NULL)
        return (binary_tree_is_full(node->left) && binary_tree_is_full(node->right));