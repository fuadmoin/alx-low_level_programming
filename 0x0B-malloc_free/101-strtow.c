#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the number of words in a string.
 * @str: the first pointer
 * Return: integer.
 */

int count_words(char *str)
{
int inside_word, char_index, word_count;

inside_word = 0;
word_count = 0;

for (char_index = 0; str[char_index] != '\0'; char_index++)
{
if (str[char_index] == ' ')
inside_word = 0;
else if (inside_word == 0)
{
inside_word = 1;
word_count++;
}
}

return (word_count);
}


/**
* strtow - concatenates all the arguments of the program.
* @str: the first pointer
* Return: pointer
*/

char **strtow(char *str)
{
char **word_array, *word;
int i, word_index = 0, str_len = 0, word_count;
int char_count = 0, word_start, word_end;

while (*(str + str_len))
str_len++;
word_count = count_words(str);
if (word_count == 0)
return (NULL);

word_array = (char **) malloc(sizeof(char *) * (word_count + 1));
if (word_array == NULL)
return (NULL);

for (i = 0; i <= str_len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (char_count)
{
word_end = i;
word = (char *) malloc(sizeof(char) * (char_count + 1));
if (word == NULL)
return (NULL);
while (word_start < word_end)
*word++ = str[word_start++];
*word = '\0';
word_array[word_index] = word - char_count;
word_index++;
char_count = 0;
}
}
else if (char_count++ == 0)
word_start = i;
}

word_array[word_index] = NULL;

return (word_array);
}
