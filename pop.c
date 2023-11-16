#include "monty.h"

/**
 * f_pop - Remove the top element of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_pop(stack_t **head, unsigned int counter)
{
    stack_t *temp;

    if (head == NULL || *head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = *head;
    *head = (*head)->next;

    if (*head != NULL)
        (*head)->prev = NULL;

    free(temp);
}
