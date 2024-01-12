#include "monty.h"

/**
 * 
*/

void freestack(stack_t *stack)
{
    stack_t *tmp = stack;
    while (tmp != NULL)
    {
        free(tmp);
        tmp = (tmp)->next;
    }
}