#include "monty.h"

/**
* f_rotr - this rotates the stack to the bottom
* @counter: line_number
* @head: stack head
* Return: 0 return
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
