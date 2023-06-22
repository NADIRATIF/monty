#include "monty.h"
/**
 * function_to_print_queue - prints queue
 * @h: head
 * @c: counter
 * Return: no return
*/
void function_to_print_queue(stack_t **h, unsigned int c)
{
	(void)h;
	(void)c;
	bus.lifi = 1;
}

/**
 * function_to_add_queue - add queue
 * @n: new_value
 * @h: head of the stack
 * Return: no return
*/
void function_to_add_queue(stack_t **h, int n)
{
	stack_t *n_n, *a;

	a = *h;
	n_n = malloc(sizeof(stack_t));
	if (n_n == NULL)
	{
		printf("Error\n");
	}
	n_n->n = n;
	n_n->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*h = n_n;
		n_n->prev = NULL;
	}
	else
	{
		a->next = n_n;
		n_n->prev = a;
	}
}

