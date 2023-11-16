#include "monty.h"

/**
 * f_div - Divide the second top element by the top element of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_div(stack_t **head, unsigned int counter)
{
    if (head == NULL || *head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", counter);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n /= (*head)->n;
    f_pop(head, counter); 
}
