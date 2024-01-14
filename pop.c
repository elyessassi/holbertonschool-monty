#include "monty.h"

/**
 * _pop - remove the top element
 * @stack: top of the stack
 * @line_number: line number
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		*stack = (*stack)->next;
		free(temp);
	}
}
