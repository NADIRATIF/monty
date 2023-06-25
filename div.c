#include "monty.h"
/**
 * function_divides_two_element - divides two elements stack.
 * @h: stack head
 * @c: counter
 * Return: no return
*/
void function_divides_two_element(stack_t **h, unsigned int c)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", c);
		fclose(bus.file);
		free(bus.content);
		function_to_clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	a = hd->next->n / hd->n;
	hd->next->n = a;
	*h = hd->next;
	free(hd);
}

