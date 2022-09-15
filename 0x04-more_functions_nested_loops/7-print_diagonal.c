#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: Determines how long the line will be
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if ((n > 1) && (i > 1))
			{
				for (j = 1; j <= i - 1; j++)
				{
					_putchar(32);
				}
			}
			_putchar('\\');
			if (i != n)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
