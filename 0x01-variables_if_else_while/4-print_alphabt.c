#include <stdio.h>

/**
 *  main-the program where the execution begins.
 *
 *  Return:0 if no error, non zero if error.
 *
 */

int main(void)

{

	char i;



	for (i = 'a'; i <= 'z'; i++)

	{

		if (i == 'e' || i == 'q')

		continue;

			putchar(i);

	}

		putchar('\n');

	return (0);

}
