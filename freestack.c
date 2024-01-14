#include "monty.h"

/**
 * 
*/

void freestack(stack_t *stack)
{
	stack_t *current = stack;
    stack_t *nextnode;

	while (current)
	{
        nextnode = current->next;
		free(current);
        current = nextnode;
	}
}