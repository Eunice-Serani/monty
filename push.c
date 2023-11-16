#include "monty.h"


/**
 * f_push - Pushes an element to the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_push(stack_t **head, unsigned int counter)
{
	if (bus.arg == NULL || !is_numeric(bus.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}

	addnode(head, atoi(bus.arg));
}

/**
 * f_pall - Prints all the values on the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;  /* Unused parameter to avoid compiler warning */

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}