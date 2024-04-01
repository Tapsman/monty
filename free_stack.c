#include "monty.h"
/**
 * free_stack - A function that free's a doubly linked list
 * @head: The head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
