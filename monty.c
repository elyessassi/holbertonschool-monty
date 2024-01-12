#include "monty.h"

/**
 *
 */

int main(int argc, char *argv[])
{
    
    char *d = "$ \n\t", *opcode;
    stack_t *stack = NULL;
    int ln = 0;
    FILE *fd;
    char *buffer;
    size_t len;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    fd = fopen(argv[1], "r");
    if (fd == NULL)
    {
        fclose(fd);
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((getline(&buffer, &len, fd)) != -1)
    {
        ln++;
        opcode = strtok(buffer, d);
        split(&stack, ln, opcode);
    }
    free(buffer);
    freestack(stack);
    fclose(fd);
    return (0);
}