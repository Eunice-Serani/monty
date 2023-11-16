#include "monty.h"

/**
 * is_numeric - Check if a string represents a valid integer.
 * @str: String to check.
 *
 * Return: 1 if the string is a numeric integer, 0 otherwise.
 */
int is_numeric(const char *str)
{
    int i = 0;

    if (str == NULL || *str == '\0')
        return 0;

    /* Handle negative sign */
    if (str[0] == '-')
        i = 1;

    for (; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }

    return 1;
}
