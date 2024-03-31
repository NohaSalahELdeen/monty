#include "monty.h"
/**
 * main - Implement the push and pall opcodes.
 * @argc: numbers of arguments.
 * @argv: arguments.
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	unsigned int l_number = 1;
	size_t length = 0;
	char *line = NULL;
	stack_t *toke = NULL;
	FILE *fd = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_file(argv[1], &fd);
	while (getline(&line, &length, fd) != -1)
	{
		strtoken(line);
		execute_instruct(&toke, l_number);
		l_number++;
	}
	free(line);
	fclose(fd);
	return (0);
}
