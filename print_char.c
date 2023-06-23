#include "monty.h"
/**
 * print_char - prints the char
 * @h: head
 * @c: counter
 * Return: no return
*/
void print_char(stack_t **h, unsigned int c)
{
	stack_t *hd;

	hd = *h;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}

