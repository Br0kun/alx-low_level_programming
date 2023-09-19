#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the input string.
 *
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}
