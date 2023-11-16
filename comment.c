#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second top element
 *         by the top element of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_mod(stack_t **head, unsigned int counter)
{
    if (bus.content[0] == '#' || head == NULL || *head == NULL || (*head)->next == NULL)
    {
        /* Treat lines starting with '#' as comments */
        return;
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n %= (*head)->n; /* Compute the rest of the division */
    f_pop(head, counter);            /* Remove the top element */
}
