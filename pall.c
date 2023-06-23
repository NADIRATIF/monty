#include "monty.h"
/**
 * function_to_print_stack - prints the stack
 * @h: head
 * @c: no used
 * Return: no return
*/
void function_to_print_stack(stack_t **h, unsigned int c)
{
	stack_t *hd;
	(void)c;

	hd = *h;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}

