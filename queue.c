#include "monty.h"

/**
 * stack_operation - Sets the format of the data to a stack (LIFO).
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_stack(stack_t **head, unsigned int counter)
{
    (void)counter;

    if (bus.lifi == 1)  /* Switching from queue to stack */
    {
        bus.lifi = 0;

        if (*head != NULL && (*head)->next != NULL)
        {
            while ((*head)->prev != NULL)
                *head = (*head)->prev;
        }
    }
}

/**
 * f_queue - Sets the format of the data to a queue (FIFO).
 * @head: Double pointer to the head of the stack.
 * @counter: Line number being executed.
 */
void f_queue(stack_t **head, unsigned int counter)
{
    (void)counter;

    if (bus.lifi == 0)  /* Switching from stack to queue */
    {
        bus.lifi = 1;

        if (*head != NULL && (*head)->next != NULL)
        {
            while ((*head)->next != NULL)
                *head = (*head)->next;
        }
    }
}