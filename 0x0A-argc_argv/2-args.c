#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all argument
 * @argc: An argument counte
 * @argv: Argument values
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
