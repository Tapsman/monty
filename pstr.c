#include "monty.h"
/**
 * f_pstr - A function that prints a string at the top of
 * the stack followed by new
 * @head: The stack head
 * @counter: line number
 * Return: Nothing
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
