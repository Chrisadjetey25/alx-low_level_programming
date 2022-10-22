#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes thhe charater c to student
 * @c: Character to print
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
