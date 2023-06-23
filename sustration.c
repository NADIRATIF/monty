#include "monty.h"
/**
  *sustration- sustration
  *@h: head
  *@c: counter
  *Return: no return
 */
void sustration(stack_t **h, unsigned int c)
{
	stack_t *a;
	int s, n;

	a = *h;
	for (n = 0; a != NULL; n++)
		a = a->next;
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	a = *h;
	s = a->next->n - a->n;
	a->next->n = s;
	*h = a->next;
	free(a);
}

