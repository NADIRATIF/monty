#include "monty.h"
/**
  *function_to_rotate_stack_bottom- rotates the stack to the bottom
  *@h: head
  *@c: counter
  *Return: no return
 */
void function_to_rotate_stack_bottom(stack_t **h, __attribute__((unused)) unsigned int c)
{
	stack_t *cp;

	cp = *h;
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *h;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*h)->prev = cp;
	(*h) = cp;
}

