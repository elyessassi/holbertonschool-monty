#include "monty.h"

/**
 * _add - add the top 2 elements of the stack
 * @stack: the top of the stack
 * @line_number: line number
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int s;
	stack_t *temp = *stack;

	if (*stack == NULL || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		s = (temp)->n + ((temp)->next)->n;
		((temp)->next)->n = s;
		*stack = (*stack)->next;
		((temp)->next)->prev = NULL;
		free(temp);
	}
}
