#include "monty.h"
/**
* run - runs the opcode
* @s: stack
* @c: counter
* @f: file
* @cnt: content
* Return: no return
*/
int run(char *cnt, stack_t **s, unsigned int c, FILE *f)
{
	instruction_t op[] = {
				{"push", push}, {"pall", pall}, {"pint", print_int},
				{"pop", print_pop},
				{"swap", swap},
				{"add", add},
				{"nop", nothing},
				{"sub", sustration},
				{"div", divides},
				{"mul", multiplies},
				{"mod", modulo},
				{"pchar", print_char},
				{"pstr", print_string},
				{"rotl", rotates_left},
				{"rotr", rotates_right},
				{"queue", queue},
				{"stack", s},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *o;

	o = strtok(cnt, " \n\t");
	if (o && o[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (op[i].opcode && o)
	{
		if (strcmp(o, op[i].opcode) == 0)
		{	op[i].f(s, c);
			return (0);
		}
		i++;
	}
	if (o && op[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", c, o);
		fclose(f);
		free(cnt);
		clear_stack(*s);
		exit(EXIT_FAILURE); }
	return (1);
}

