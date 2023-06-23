#include "monty.h"
/**
 * pall - prints the stack
 * @h: head
 * @counter: counter
 * Return: no return
*/
void pall(stack_t **h, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *h;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}

