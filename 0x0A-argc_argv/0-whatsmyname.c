#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first arguement
 * @argc: count of arguements
 * @argv: arguements
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
