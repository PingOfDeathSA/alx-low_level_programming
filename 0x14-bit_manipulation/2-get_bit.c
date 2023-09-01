#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index in a decimal number.
 * @n: The number to be examined.
 * @index: The position of the bit to retrieve.
 *
 * Return: The value of the requested bit.
 */
int get_bit(unsigned long int n, unsigned int index) {
    int value_bit;
    int newIndex = index;
    unsigned long int newN = n;

    if (newIndex > 63)
        return (-1);

    value_bit = (newN >> newIndex) & 1;

    return (value_bit);
}
