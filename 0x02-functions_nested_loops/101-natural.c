#include <stdio.h>

/**
 * main - Sum of all the mulitples of 3 or 5 bellow 1024.
 *
 * Return: Always return 0.
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}

	printf("%d\n", sum);

	return (0);
}

