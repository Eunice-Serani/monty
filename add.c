#include "monty.h"

/**
 * f_add - Add the top two elements of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_add(stack_t **head, unsigned int counter)
{
    if (head == NULL || *head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n += (*head)->n; // Add the top two elements
    f_pop(head, counter);           // Remove the top element
}
