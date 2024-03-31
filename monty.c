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
	char **toke;
	stack_t *tok;
	FILE *fd = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_file(argv[1], &fd);
	while (getline(&line, &length, fd) != -1)
	{
		toke = strtoken(line);
		l_number++;
	}
	free(toke);
	execute_instruct(&tok, l_number);
	free(line);
	fclose(fd);
	return (0);
}
