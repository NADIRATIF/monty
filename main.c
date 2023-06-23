#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: arguments
* @argv: file
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *c;
	FILE *f;
	size_t s = 0;
	ssize_t rl = 1;
	stack_t *sk = NULL;
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
	while (rl > 0)
	{
		c = NULL;
		rl = getline(&c, &s, f);
		bus.content = c;
		counter++;
		if (rl > 0)
		{
			run(c, &sk, counter, f);
		}
		free(c);
	}
	clear_stack(sk);
	fclose(f);
return (0);
}

