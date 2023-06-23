#include "monty.h"
/**
 * divides - divides
 * @h: head
 * @c: counter
 * Return: no return
*/
void divides(stack_t **h, unsigned int c)
{
	stack_t *hd;
	int len = 0, aux;

	hd = *h;
	while (hd)
	{
		hd = hd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	aux = hd->next->n / hd->n;
	hd->next->n = aux;
	*h = hd->next;
	free(hd);
}

