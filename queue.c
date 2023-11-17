#include "monty.h"

/**
 * f_stack - Sets the format of the data to a stack (LIFO).
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	bus.lifi = 0;
}

/**
 * f_queue - Sets the format of the data to a queue (FIFO).
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	bus.lifi = 1;
}

/**
 * addqueue - add node to tail of queue
 * @n: new value
 * @head: head of the queue
 *
 * Return: none
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		printf("Error\n");

	new_node->n = n;
	new_node->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
