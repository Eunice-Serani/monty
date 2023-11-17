#include "monty.h"

/**
 * f_rotl - Rotates the stack to the bottom.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_rotl(stack_t **head, unsigned int counter)
{
    stack_t *temp, *last;

    (void)counter;

    if (*head != NULL && (*head)->next != NULL)
    {
        last = *head;

        while (last->next != NULL)
            last = last->next;

        temp = last->prev;

        if (temp != NULL)
        {
            temp->next = NULL;
            last->prev = NULL;

            last->next = *head;
            (*head)->prev = last;

            *head = last;
        }
    }
}
