#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_rotr(stack_t **head, unsigned int counter)
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
