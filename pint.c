#include "monty.h"

/**
 * _pint - print top value
 * @stack: top of stack
 * @line_number: line number
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	if (node != NULL)
	{
		printf("%d\n", node->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}