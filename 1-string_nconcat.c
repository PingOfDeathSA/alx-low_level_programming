#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @str_1: string to append to
 * @str_2: string to concatenate from
 * @bytes_to_concat: number of bytes from str_2 to concatenate to str_1
 *
 * Return: pointer to the result_ing string
 */
char *string_nconcat(char *str_1, char *str_2, unsigned int bytes_to_concat)
{
char *result_;
unsigned int i = 0, j = 0, len_1 = 0, len_2 = 0;

while (str_1 && str_1[len_1])
len_1++;
while (str_2 && str_2[len_2])
len_2++;
if (bytes_to_concat < len_2)
result_ = malloc(sizeof(char) * (len_1 + bytes_to_concat + 1));
else
result_ = malloc(sizeof(char) * (len_1 + len_2 + 1));
if (!result_)
return (NULL);
while (i < len_1)
{
result_[i] = str_1[i];
i++;
}
while (bytes_to_concat < len_2 && i < (len_1 + bytes_to_concat))
result_[i++] = str_2[j++];
while (bytes_to_concat >= len_2 && i < (len_1 + len_2))
result_[i++] = str_2[j++];
result_[i] = '\0';
return (result_);
}


