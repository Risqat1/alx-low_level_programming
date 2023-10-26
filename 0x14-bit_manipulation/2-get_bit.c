#include "main.h"

/**
 * get_bit - value returns of a bit at an index
 * @n: search number
 * @index: index of the bit
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index  > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

