#include "monty.h"
/**
 * queue - prints queue
 * @h: head
 * @c: counter
 * Return: no return
*/
void queue(stack_t **h, unsigned int c)
{
	(void)h;
	(void)c;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new_value
 * @h: head
 * Return: no return
*/
void add_queue(stack_t **h, int n)
{
	stack_t *nn, *a;

	a = *h;
	nn = malloc(sizeof(stack_t));
	if (nn == NULL)
	{
		printf("Error\n");
	}
	nn->n = n;
	nn->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*h = nn;
		nn->prev = NULL;
	}
	else
	{
		a->next = nn;
		nn->prev = a;
	}
}

