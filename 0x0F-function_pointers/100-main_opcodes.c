#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if number of arguments is incorrect,
 *         2 if number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *p = (unsigned char *) main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", *(p + i));
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
