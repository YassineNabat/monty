#include "monty.h"

/**
 * pint - prints the top
 * @stack: stack head
 * 
 * Return: no return
 */

void Spint(stack_t **stack) 
{
	if (!*stack) 
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", global_data.line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
