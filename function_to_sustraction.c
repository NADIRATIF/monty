#include "monty.h"
/**
  *function_to_sustration- function to sustraction
  *@h: head
  *@c: counter
  *Return: no return
 */
void function_to_sustration(stack_t **h, unsigned int c)
{
	stack_t *a;
	int s, nds;

	a = *h;
	for (nds = 0; a != NULL; nds++)
		a = a->next;
	if (nds < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	a = *h;
	s = a->next->n - a->n;
	a->next->n = s;
	*h = a->next;
	free(a);
}

