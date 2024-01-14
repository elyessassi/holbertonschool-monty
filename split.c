#include "monty.h"

/**
 *
 */

void split(stack_t **stack, unsigned int line_number, char *opcode)
{
    int i = 0;
    instruction_t ops[] = {
        {"push", _push},
        {"pall", _pall},
        {"pint", _pint},
        {"nop", _nop},
        {NULL, NULL}};
    while (ops[i].opcode != NULL)
    {

        if (strcmp(opcode, ops[i].opcode) == 0)
        {
            ops[i].f(stack, line_number);
            return;
        }
        i++;
    }
    if (strlen(opcode) != 0)
	{
		fprintf(stderr, "L%d: unknown instruction %s", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
