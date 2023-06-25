#include "monty.h"
/**
* function_to_clear_stack - clear doubly link list
* @h: head
*/
void function_to_clear_stack(stack_t *h)
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

