#include "monty.h"
/**
 * push -  pushes an element to the stack.
 * @head: pointer to a pointer to a stack_t type.
 * @numbering: number of line.
 */
void push(stack_t **head, unsigned int numbering)
{
	int n = 0;
	stack_t *new_element;

	if (!n)
	{
		fprintf(stderr, "L%d: usage: push integer\n", numbering);
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
	if (*head == NULL)
		new_element->next = NULL;
	else
	{
		new_element->next = *head;
		(*head)->prev = new_element;
	}
	*head = new_element;
}

/**
 * pall - prints all the values on the stack.
 * @head: pointer to a pointer to a stack_t type.
 * @numbering: number of line.
 */
void pall(stack_t **head, unsigned int numbering)
{
	stack_t *top;
	(void) numbering;

	top = *head;
	while(top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
