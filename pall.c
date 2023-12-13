#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main
 *
 * return : void
 */

void pall(stack_t **stack)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
