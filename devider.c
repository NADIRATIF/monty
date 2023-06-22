#include "monty.h"

/**
 * function_to_devide - devide two elements.
 * @h: head
 * @c: counter
 * Return: no return
 */
void function_to_devide(stack_t **h, unsigned int c)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't devide, stack too short\n", c);
		handle_error();
	}

	if ((*h)->n == 0)
	{
		fprintf(stderr, "L%d: devision by 0\n", c);
		handle_error();
	}

	(*h)->next->n /= (*h)->n;

	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
}

