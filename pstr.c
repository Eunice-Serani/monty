#include "monty.h"

/**
* f_pstr - This prints the string starting from the beginning of a stack
* followed by new
* @counter: line_number
* @head: stack head
* Return: 0 return
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
	
	printf("/n");
}
