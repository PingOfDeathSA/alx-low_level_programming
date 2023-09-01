#include "main.h"
/**
 * set_bit - Changes the value of a specific bit at a given index to 1.
 * @n: A pointer to the number to be modified.
 * @index: The position of the bit to be set to 1.
 *
 * Return: 1 if successful, -1 if there was an issue.
 */

int set_bit(unsigned long int *n, unsigned int index) {
    if (index > 63)
        return (-1);

    unsigned int newIndex = index;
    unsigned long int newN = *n;

    newN = ((1UL << newIndex) | newN);
    *n = newN;

    return (1);
}

