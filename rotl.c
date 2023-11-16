#include "monty.h"

/**
* f_rotl - this rotates the stack to the top
* @counter: line_number
* @head: stack head
* Return: 0 return
*/
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *tail;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	
	tail = (*head)->next;
	
	tail->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = tail;
}
