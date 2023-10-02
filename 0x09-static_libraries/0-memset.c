#include "main.h"

/**
  * _memset - main function that fills memory with a constant byte
  * @b: value used to fill the memory
  * @s: Function paramater
  * @n: Function parameter bytes of the memory
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
