#include "monty.h"
/**
 * add_node_to_stack - add node to stack
 * @h: head
 * @n: new_value
 * Return: no return
*/
void add_node_to_stack(stack_t **h, int n)
{

	stack_t *n_n, *a;

	a = *h;
	n_n = malloc(sizeof(stack_t));
	if (n_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = n_n;
	n_n->n = n;
	n_n->next = *h;
	n_n->prev = NULL;
	*h = n_n;
}

