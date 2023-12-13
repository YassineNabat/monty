#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @line_number : amount of lines
 * @n : integer value to be pushed onto the stack
 *
 * return : void
 */

void push(stack_t **stack, int n, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = *stack;
	*stack = new;
	return (new);
}
