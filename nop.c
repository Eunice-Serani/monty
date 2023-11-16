#include "monty.h"

/**
 * f_nop - No operation. Does nothing.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_nop(stack_t **head, unsigned int counter)
{
    (void)head;  // Unused parameter to avoid compiler warning
    (void)counter;  // Unused parameter to avoid compiler warning
    // The nop opcode doesn't perform any operation
}
