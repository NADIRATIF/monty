#include "monty.h"
/**
* run - executes the opcode
* @s: stack
* @c: counter
* @f: file
* @cnt: content
* Return: no return
*/
int run(char *cnt, stack_t **s, unsigned int c, FILE *f)
{
	instruction_t op[] = {
				{"push", f_push}, {"pall", function_to_print_stack}, {"pint", function_to_print_intiger},
				{"pop", function_to_print_op},
				{"swap", function_to_swap},
				{"add", function_to_add_element},
				{"nop", function_none},
				{"sub", function_to_sustration},
				{"div", function_divides_two_element},
				{"mul", function_to_multiplies},
				{"mod", function_to_modulo},
				{"pchar", function_to_print_char},
				{"pstr", function_to_print_string},
				{"rotl", function_to_rotates_stack},
				{"rotr", function_to_rotate_stack_bottom},
				{"queue", function_to_print_queue},
				{"stack", function_to_print_stack_top},
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
		function_to_clear_stack(*s);
		exit(EXIT_FAILURE); }
	return (1);
}

