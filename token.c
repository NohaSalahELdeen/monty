#include "monty.h"
/**
 * strtoken - tokenize the string.
 * @line: the string.
 */
char **strtoken(char *line)
{
	char *delim = " \n\t", *token, *temp;
	char **tokens;
	int x = 0, y = 0;

	temp = strdup(line);
	if (temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(temp, delim);
	while (token != NULL)
	{
		x++;
		token = strtok(NULL, delim);
	}

	tokens = malloc((x + 1) * sizeof(char*));
	if (tokens == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(temp, delim);
	while (token != NULL)
	{
		tokens[y++] = strdup(token);
		token = strtok(NULL, delim);
	}
	tokens[x] = NULL;
	return (tokens);
}
