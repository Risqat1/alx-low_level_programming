#include "main.h"

/**
 * get_endianness - machine little
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *) &i;

	return (*a);
}
