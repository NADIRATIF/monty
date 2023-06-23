#include "monty.h"
/**
 * function_to_multiplies - multiplies elements stack.
 * @h: head
 * @c: counter
 * Return: no return
*/
void function_to_multiplies(stack_t **h, unsigned int c)
{
	stack_t *hd;
	int l = 0, a;

	hd = *h;
	while (hd)
	{
		hd = hd->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	a = hd->next->n * hd->n;
	hd->next->n = a;
	*h = hd->next;
	free(hd);
}

