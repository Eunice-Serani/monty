#include "monty.h"

/**
 * f_pint - Print the value at the top of the stack and free the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_pint(stack_t **head, unsigned int counter)
{
    if (head == NULL || *head == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*head)->n);
}
