#include "binary_trees.h"

/**
 * binary_tree_is_heap - checks if a binary tree is heap
 * @tree: pointer to the node
 * Return: 1 in case BTS /  0 otherwise
 **/
int binary_tree_is_heap(const binary_tree_t *tree)
{
int tmp;
if (!tree)
return (0);
tmp = binary_tree_is_complete(tree);
if (!tmp)
return (0);
return (check_max(tree));
}
