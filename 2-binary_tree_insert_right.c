#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
			return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	if (!parent->right)
			parent->right = node;
	else
	{
			node->right = parent->right;
			parent->right = node;
			node->right->parent = node;
	}
	return (node);
}
