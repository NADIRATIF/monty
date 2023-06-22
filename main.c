#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty main function
* @argc: arguments
* @argv: monty file
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cnt;
	FILE *f;
	size_t sz = 0;
	ssize_t r_l = 1;
	stack_t *s = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	bus.file = f;
	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		cnt = NULL;
		r_l = getline(&cnt, &sz, f);
		bus.content = cnt;
		counter++;
		if (r_l > 0)
		{
			run(cnt, &s, counter, f);
		}
		free(cnt);
	}
	function_to_clear_stack(s);
	fclose(f);
return (0);
}

