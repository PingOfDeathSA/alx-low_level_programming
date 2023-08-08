#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to determine the word count in a string
 * @string: The string to analyze
 * 
 * Return: The number of words
 */
int count_words(char *string)
{
int new_word = 0, char_index, word_count;
new_word = 0;
word_count = 0;
for (char_index = 0; string[char_index] != '\0'; char_index++)
{
if (string[char_index] == ' ')
new_word = 0;
else if (new_word == 0)
{
new_word = 1;
word_count++;
}
}
return word_count;
}

/**
 * strtow - Splits a given string into individual words
 * @str: The string to split
 * 
 * Return: Pointer to an array of strings (Success), or NULL (Error)
 */
char **strtow(char *str)
{
char **word_matrix, *temp;
int i, matrix_index = 0, length = 0, total_words, c = 0, start, end;
while (*(str + length))
length++;
total_words = count_words(str);
if (total_words == 0)
return (NULL);
word_matrix = (char **) malloc(sizeof(char *) * (total_words + 1));
if (word_matrix == NULL)
return (NULL);
for (i = 0; i <= length; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
temp = (char *) malloc(sizeof(char) * (c + 1));
if (temp == NULL)
return (NULL);
while (start < end)
*temp++ = str[start++];
*temp = '\0';
word_matrix[matrix_index] = temp - c;
matrix_index++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
word_matrix[matrix_index] = NULL;
return (word_matrix);
}

