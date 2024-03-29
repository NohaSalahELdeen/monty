#include "monty.h"
/**
 * read_file - read the monty file.
 * @montyfile: name of the file.
 */
void open_file(char *montyfile, FILE **fd)
{

	*fd = fopen(montyfile, "r");
	if (*fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", montyfile);
		exit(EXIT_FAILURE);
	}
}
