#include "monty.h"
/**
 * print_string - prints the string
 * @h: head
 * @c: counter
 * Return: no return
*/
void print_string(stack_t **h, unsigned int c)
{
	stack_t *hd;
	(void)c;

	hd = *h;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}

