#include "monty.h"
/**
  *rotates_left- rotates left
  *@h: head
  *@c: counter
  *Return: no return
 */
void rotates_left(stack_t **h,  __attribute__((unused)) unsigned int c)
{
	stack_t *t = *h, *a;

	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	a = (*h)->next;
	a->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *h;
	(*h)->next = NULL;
	(*h)->prev = t;
	(*h) = a;
}

