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
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n += (*head)->n;
    f_pop(head, counter); 
}