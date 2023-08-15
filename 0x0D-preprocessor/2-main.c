#include <stdio.h>

/**

The main function prints the name of the current file.

@return Always 0 to indicate success.
*/
int main(void)
{
printf("%s\n", __FILE__);

return 0;
}
