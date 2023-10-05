#include <stdlib.h>
#include "main.h"

/**
 * count_word - count number of words
 * @s: string
 * Return: 0
 */
int count_word(char *s)
{
	int flag, b, n;

	flag = 0;
	n = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - splits a string into words
 * @str: string
 * Return: (0)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, l = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[l] = tmp - a;
				l++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}

	matrix[l] = NULL;

	return (matrix);
}

