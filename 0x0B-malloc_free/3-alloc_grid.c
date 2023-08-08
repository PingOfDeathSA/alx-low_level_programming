#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid
 * @width: width input
 * @height: height input
 * Return:  2 array
 */
int **alloc_grid(int width, int height)
{
int **Test;
int x_test, y_test;
if (width <= 0 || height <= 0)
return (NULL);
Test = malloc(sizeof(int *) * height);
if (Test == NULL)
return (NULL);
for (x_test = 0; x_test < height; x++)
{
Test[x_test] = malloc(sizeof(int) * width);

if (Test[x_test] == NULL)
{
for (; x_test >= 0; x_test--)
free(Test[x_test]);
free(Test);
return (NULL);
}
}
for (x_test = 0; x_test < height; x_test++)
{
for (y_test = 0; y_test < width; y_test++)
Test[x_test][y_test] = 0;
}
return (Test);
}
