#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_rotl(stack_t **head, unsigned int counter)
{
    stack_t *temp, *last;

    (void)counter;

    if (*head != NULL && (*head)->next != NULL)
    {
        temp = *head;
        last = *head;

        while (last->next != NULL)
            last = last->next;

        *head = temp->next;
        (*head)->prev = NULL;

        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
    }
}
