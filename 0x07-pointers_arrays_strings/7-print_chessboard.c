#include "main.h"

/**
  * print_chessboard - main function that prints cheeseboard
  * @a: function parameter
  * Return: 0.
  */
void print_chessboard(char (*a)[8])
{
	int k;
	int r;

	for (k = 0; k < 8; k++)
	{
	for (r = 0; r < 8; r++)
	_putchar(a[k][r]);
	_putchar('\n');
	}
}
