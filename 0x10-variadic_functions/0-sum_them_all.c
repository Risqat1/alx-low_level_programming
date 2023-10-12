#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  A function that returns the sum of all its paramters.
 * @n: The number of paramters
 * @...: A variable number of paramters
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sp;
	unsigned int i, sum = 0;

	va_start(sp, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sp, int);

	va_end(sp);

	return (sum);
}
