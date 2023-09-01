#include "main.h"
#include <stdio.h>
/**
 * print_binary - Displays the binary representation of a decimal number.
 * @n: The decimal number to be displayed in binary.
 */

void print_binary(unsigned long int n)
 {
    int shift;
    int flag = 0; 

    if (n == 0) {
        putchar('0');
        return;
    }

    for (shift = sizeof(n) * 8 - 1; shift >= 0; shift--)
     {
        if ((n >> shift) & 1) { 
            putchar('1');
            flag = 1;
        } else if (flag) {
            putchar('0');
        }
    }
}

int main() {
    unsigned long int decimal = 42; 
    printf("Binary representation of %lu: ", decimal);
    print_binary(decimal);
    putchar('\n');
    
    return 0;
}
