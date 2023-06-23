#include "monty.h"
/**
 * push - add node to the stack
 * @h: head
 * @c: counter
 * Return: no return
*/
void push(stack_t **h, unsigned int c)
{
	int n, i = 0, f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(bus.file);
			free(bus.content);
			clear_stack(*h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*h);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(h, n);
	else
		add_queue(h, n);
}

