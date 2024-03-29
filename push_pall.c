#include "monty.h"
/**
 * push -  pushes an element to the stack.
 * @stack: pointer to a pointer to a stack_t type.
 * @line_number: number of line.
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *new_element;

	if (!n)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	new_element = malloc(sizeof(stack_t));
	if (new_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_element->n = n;
	new_element->prev = NULL;
	if (*stack == NULL)
		new_element->next = NULL;
	else
	{
		new_element->next = *stack;
		(*stack)->prev = new_element;
	}
	*stack = new_element;
}

/**
 * pall - prints all the values on the stack.
 * @stack: pointer to a pointer to a stack_t type.
 * @line_number: number of line.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void) line_number;

	top = *stack;
	while(top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
