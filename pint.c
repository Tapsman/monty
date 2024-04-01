#include "monty.h"
/**
 * f_pint - A function that prints the stack at the top
 * @head: Is the stack head
 * @counter: Is the lne numeber
 * Return: Nothing
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
