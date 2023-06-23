#include "monty.h"
/**
 * add_node - add node
 * @h: head
 * @n: new value
 * Return: no return
*/
void add_node(stack_t **h, int n)
{

	stack_t *nn, *a;

	a = *h;
	nn = malloc(sizeof(stack_t));
	if (nn == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = nn;
	nn->n = n;
	nn->next = *h;
	nn->prev = NULL;
	*h = nn;
}

