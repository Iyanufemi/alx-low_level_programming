#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return(0);
}
