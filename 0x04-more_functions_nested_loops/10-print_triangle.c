#include "main.h"

/**
 * main - prints triangle using # Character
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, index;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (index = size - i; index > 0; index--)
				_putchar(' ');
			for (index = 0; index < i; index++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
