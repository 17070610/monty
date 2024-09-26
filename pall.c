#include "monty.h"

/**
 * f_pall - Prints all the values on the stack
 * @head: Stack head
 * @counter: Line number (not used here)
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;

	if (!current)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
