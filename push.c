#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: shows the stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int i, s = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			s++;
		for (; bus.arg[s] != '\0'; s++)
		{
			if (bus.arg[s] > '57' || bus.arg[s] < '48')
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	i = strtol(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
