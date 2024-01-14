#include "monty.h"

/**
 * 
*/

void _add(stack_t **stack, unsigned int line_number)
{
	int s;
	stack_t *temp = *stack;

	if (*stack == NULL || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
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