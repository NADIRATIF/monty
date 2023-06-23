#include "monty.h"
/**
 * function_to_print_op - prints the top
 * @head: head
 * @c: counter
 * Return: no return
*/
void function_to_print_op(stack_t **h, unsigned int c)
{
	stack_t *hd;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	*h = hd->next;
	free(hd);
}

