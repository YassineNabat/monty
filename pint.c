#include "monty.h"

/**
 * Spint - function that prints the top element on the stack
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 * 
 * Return: see below
 * 1 if successfull
 * 2 if failed, EXIT_FAILURE
 */
void Spint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		printf(stderr, "L%d: can't pint, stack empty\n", line_number);
		close(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
