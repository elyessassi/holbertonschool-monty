#include "monty.h"
/**
 *
 */

void _push(stack_t **stack, unsigned int line_number)
{
    stack_t *newnode = malloc(sizeof(stack_t));
    (void)line_number;
    char *d = "$ \n\t",*op;
    int data;

    if (newnode == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    op = strtok(NULL, d);
    if ((op == NULL))
    {
        fprintf(stderr, "L%d: usage: push integer", line_number);
        exit(EXIT_FAILURE);
    }
    data = atoi(op);


    newnode->n = data;
    newnode->next = (*stack);
    newnode->prev = NULL;

    if (newnode->next != NULL)
    {
        newnode->next->prev = newnode;
    }

    *stack = newnode;
}

void _pall(stack_t **stack, unsigned int line_number)
{
    (void)line_number;
    stack_t *tmp = *stack;
    while ((tmp != NULL))
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}