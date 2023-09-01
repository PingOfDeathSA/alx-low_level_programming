#include "main.h"
#include <unistd.h>

int _putchar(char charec)
{
return (write(1, &charec, 1));
}
