#include "monty.h"
/**
 * print_int - prints int
 * @h: head
 * @c: counter
 * Return: no return
*/
void print_int(stack_t **h, unsigned int c)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}

