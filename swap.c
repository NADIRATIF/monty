#include "monty.h"
/**
 * function_to_swap - adds the top two elements of the stack.
 * @h: head
 * @c: counter
 * Return: no return
*/
void function_to_swap(stack_t **h, unsigned int c)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	a = hd->n;
	hd->n = hd->next->n;
	hd->next->n = a;
}

