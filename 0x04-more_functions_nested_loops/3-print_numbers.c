#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 * void: No Input Parameter
 *
 * Return: 1 on success, -1 on error
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
