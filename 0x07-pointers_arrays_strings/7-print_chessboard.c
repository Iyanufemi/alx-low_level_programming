#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @: input point
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	unsigned int j, b;

	for (j = 0; j < 8; j++)
	{
		for(b = 0; b < 8; b++)
			_putchar(a[j][b]);
		_putchar('\n');
	}
}
