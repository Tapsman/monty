#include "monty.h"
/**
 * f_pall - A function that will print the stack
 * @head: Is the head of the stack
 * @counter: Null,..
 * Return: Nothing at all
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	head = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
