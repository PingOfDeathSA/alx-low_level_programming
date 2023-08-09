#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack_str: The string to search in
 * @needle_str: The substring to search for
 * Return: Pointer to the first occurrence of the substring or NULL if not found
 */
char *_strstr(char *haystack_str, char *needle_str)
{
for (; *haystack_str != '\0'; haystack_str++)
{
char *haystack_ptr = haystack_str;
char *needle_ptr = needle_str;
while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
{
haystack_ptr++;
needle_ptr++;
}
if (*needle_ptr == '\0')
return (haystack_str);
}
return (0);
}


