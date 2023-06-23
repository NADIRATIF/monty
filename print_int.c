#include "monty.h"
/**
 * function_to_print_intiger - function to print intiger
 * @h: head
 * @c: counter
 * Return: no return
*/
void function_to_print_intiger(stack_t **h, unsigned int c)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}

