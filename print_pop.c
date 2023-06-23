#include "monty.h"
/**
 * print_pop - prints the top
 * @h: head
 * @counter: counter
 * Return: no return
*/
void print_pop(stack_t **h, unsigned int counter)
{
	stack_t *hd;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	hd = *h;
	*h = hd->next;
	free(hd);
}

