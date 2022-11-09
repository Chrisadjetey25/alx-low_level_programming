#include <unistd.h>

/**
 * _putchar - writes the character c to student
 * @c: The character to print
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
