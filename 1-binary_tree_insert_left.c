#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 *
 * Return:  pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	if (!parent->left)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
