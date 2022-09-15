#include "main.h"

/**
 * print_number - prints a number with _putchar
 * @n: Number to print
 *
 * Return: 1 on success and -1 on error
 */
void print_number(int n)
{
	int ten, i, neg;
	unsigned int no, no2;

	ten = 1;
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
	}
	no = n;
	no2 = n;
	while (no >= 10)
	{
		no = no / 10;
		ten = ten * 10;
	}
	if (neg == 1)
	{
		_putchar('-');
	}
	_putchar('0' + (no2 / ten));
	i = ten / 10;
	while (i >= 1)
	{
		_putchar('0' + (digit2 / i) % 10);
		i = i / 10;
	}
}
