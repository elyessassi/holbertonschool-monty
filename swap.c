#include "monty.h"

/**
 * _swap - swap the top 2 elements
 * @line_number: line number
 * @stack: top of the stack
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	int t;

	if (*stack == NULL || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		t = (*stack)->n;
		(*stack)->n = ((*stack)->next)->n;
		((*stack)->next)->n = t;
	}
}
