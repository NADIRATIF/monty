#include "monty.h"
/**
 * swap - adds the top two elements of the stack.
 * @h: stack head
 * @counter: line_number
 * Return: no return
*/
void swap(stack_t **h, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	a = hd->n;
	hd->n = hd->next->n;
	hd->next->n = a;
}

