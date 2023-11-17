#include "monty.h"

/**
 * f_push - Pushes an element to the stack.
 * @head: Double pointer to the head of the stack.
 * @number: Integer to be pushed onto the stack.
 */
void f_push(stack_t **head, unsigned int number)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
		free_stack(*head);
        exit(EXIT_FAILURE);
    }

    if (bus.lifi == 0) /* Stack mode (LIFO) */
    {
        new_node->n = number;
        new_node->prev = NULL;
        new_node->next = *head;

        if (*head != NULL)
            (*head)->prev = new_node;

        *head = new_node;
    }
    else /* Queue mode (FIFO) */
    {
        new_node->n = number;
        new_node->prev = *head;
        new_node->next = NULL;

        if (*head != NULL)
            (*head)->next = new_node;

        *head = new_node;
    }
}

/**
 * f_pall - Prints all the values on the stack.
 * @head: Double pointer to the head of the stack.
 * @number: Line number being executed.
 */
void f_pall(stack_t **head, unsigned int number)
{
    stack_t *temp = *head;

    (void)number;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}
