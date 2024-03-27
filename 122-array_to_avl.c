#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
avl_t *tree = NULL;
size_t l, m;
if (array == NULL)
return (NULL);

for (l = 0; l < size; l++)
{
for (m = 0; m < l; m++)
{
if (array[m] == array[l])
break;
}
if (m == l)
{
if (avl_insert(&tree, array[l]) == NULL)
return (NULL);
}
}
return (tree);
}
