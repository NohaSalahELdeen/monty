#include "monty.h"
/**
 * execute_instruct - excute the opcode.
 * @stack: pointer.
 * @numbering: line number.
 */
void execute_instruct(stack_t **stack, unsigned int numbering)
{
	int i;

	instruction_t instruct[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	for(i = 0; instruct[i].opcode != NULL; i++)
	{
		if (strcmp(instruct[i].opcode, "push") == 0)
			instruct[i].f(stack, numbering);
	}

	if (!instruct[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", numbering, instruct[i].opcode);
		exit(EXIT_FAILURE);
	}
}
