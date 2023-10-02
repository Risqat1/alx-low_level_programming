#include "main.h"

/**
  * _strchr - main function that locates a character in a string.
  * @s: Function s
  * @c: Function c
  * Return: 0.
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}


