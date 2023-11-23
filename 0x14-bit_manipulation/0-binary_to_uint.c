#include "main.h"
/**
 * COnverting binary to int
 * @binary: a number to intiger
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int _ba_s = 1, ourcome = 0, _leg = 0;
if (b == NULL)
return (0);
while (b[_leg])
_leg++;
while (_leg)
{
if (b[_leg - 1] != '0' && b[_leg - 1] != '1')
return (0);
if (b[_leg - 1] == '1')
ourcome += _ba_s;
ba_s *= 2;
_leg--;
}
return (ourcome);
}

