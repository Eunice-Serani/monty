#include "monty.h"

/**
 * f_swap - Swap the top two elements of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 * Return: void
 */
void f_swap(stack_t **head, unsigned int counter)
{
    stack_t *temp;

    if (head == NULL || *head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = (*head)->next;

    (*head)->next = temp->next;
    temp->prev = (*head)->prev;

    if ((*head)->next != NULL)
        (*head)->next->prev = *head;

    (*head)->prev = temp;
    temp->next = *head;

    *head = temp;
}
