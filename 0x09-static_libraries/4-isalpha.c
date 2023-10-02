#include "main.h"
/**
 * _isalpha - Checks charcter
 * @c: The charceter
 * Return: 1 for all
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
