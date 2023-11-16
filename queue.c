#include "monty.h"

/**
* f_queue - this prints the front of the queue
* @counter: shows the line_number
* @head: the stack head
* Return: 0 return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void) head;
	(void)counter;
	bus.lifi = 1;
}

/**
* addqueue -this adds node to the tail stack
* @n: new_value
* @head: shows the head of the stack
* Return: 0 return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *tail;

	tail = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;
	if (tail)
	{
		while (tail->next)
			tail = tail->next;
	}
	if (!tail)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tail->next = new_node;
		new_node->prev = tail;
	}
}
