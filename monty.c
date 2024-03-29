#include "monty.h"
/**
 * main - Implement the push and pall opcodes.
 * @argc: numbers of arguments.
 * @argv: arguments.
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	unsigned int l_number;
	size_t length = 0;
	char *line;
	FILE *fd = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_file(argv[1], fd);
	while (getline(&line, &length, fd) != -1)
		l_number++;
	return (0);
}
