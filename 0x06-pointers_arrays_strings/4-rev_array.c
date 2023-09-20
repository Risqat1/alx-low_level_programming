#include "main.h"

/**
  * reverse_array - main function that reverses the content of an array.
  * @a:an array of integers
  * @n:Function parameter
  * Return: Always 0
  */

void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}
