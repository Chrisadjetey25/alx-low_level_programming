#include <stdio.h>

/**
 * main-begin program entry point.
 *
 * Return:0 no error, non zero if error
 *
 */

int main(void)

{

	int i;



	for (i = 0 ; i < 100 ; i++)
	{

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i != 99)

	{
		putchar(',');
		putchar(' ');

	}
	}
		putchar('\n');

	return (0);
}
