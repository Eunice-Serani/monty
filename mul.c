#include "monty.h"

/**
 * f_mul - Multiply the second top element by the top element of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_mul(stack_t **head, unsigned int counter)
{
    if (head == NULL || *head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n *= (*head)->n;
    f_pop(head, counter);
}