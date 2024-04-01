#include "monty.h"
/**
 * execute - Function that will execute the opcode
 * @stack: Head linked list - stack
 * @counter: Is the line counter
 * @file: Is the pointer to monty
 * @content: Line content
 * Return: Nothing
 */
int execute(char *content, stack_t *stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"add", f_add},
		{"pint", f_pint},
		{"stack", f_stack},
		{"swap", f_swap},
		{"queue", f_queue},
		{"rotr", f_rotr},
		{"rot1", f_rot1},
		{"pstr", f_pstr},
		{"pchar", f_pchar},
		{"mod", f_mod},
		{"mul", f_mul},
		{"div", f_div},
		{"pstr", f_pstr},
		{"pop", f_pop},
		{"nop", f_nop},
		{NULL, NULL}
	};

	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
