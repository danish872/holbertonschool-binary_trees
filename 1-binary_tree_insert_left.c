#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return:A pointer to the created node or NULL on failure or if parent is NULL
=======
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
>>>>>>> main
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

<<<<<<< HEAD
	if (parent == NULL)
		return (NULL);

=======
	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create new node */
>>>>>>> main
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

<<<<<<< HEAD
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

=======
	/* If parent already has a left child */
	if (parent->left != NULL)
	{
		/* Set current left child as left child of new node */
		new_node->left = parent->left;
		/* Update parent of existing left child */
		parent->left->parent = new_node;
	}

	/* Set new node as parent's left child */
>>>>>>> main
	parent->left = new_node;

	return (new_node);
}
