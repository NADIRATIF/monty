#include "monty.h"
/**
 * multiplies - multiplies
 * @h: head
 * @c: counter
 * Return: no return
*/
void multiplies(stack_t **h, unsigned int c)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	aux = hd->next->n * hd->n;
	hd->next->n = aux;
	*h = hd->next;
	free(hd);
}

