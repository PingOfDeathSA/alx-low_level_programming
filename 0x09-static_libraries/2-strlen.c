#include "main.h"

/**
 * my_unique_strlen - returns the length of a string
 * @my_string: The input string
 * 
 * Result: Length of my_string
 */
int _strlen(char *my_string)
{
    int my_length = 0;

    while (*my_string != '\0')
    {
        my_length++;
        my_string++;
    }

    return my_length;
}

