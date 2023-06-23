#include "monty.h"
/**
* clear_stack - clear doubly link
* @h: head
*/
void clear_stack(stack_t *h)
{
	stack_t *a;

	a = h;
	while (h)
	{
		a = h->next;
		free(h);
		h = a;
	}
}

