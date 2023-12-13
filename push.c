#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @value:  take a string input and convert it into an integer
 * @num: store the integer representation of the input string before assigning it to the stack_t
 *
 * return : void
 */

void push(stack_t *stack, char *value) {
	int num;

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", global_data.line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(value);
	if (num == 0 && strcmp(value, "0") != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", global_data.line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *node = malloc(sizeof(stack_t));
	if (node == NULL) {
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = num;
	node->next = stack;
	node->prev = NULL;

	if (stack) {
	stack->prev = node;
	}
	stack = node;
}
