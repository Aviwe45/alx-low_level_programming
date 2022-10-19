#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charector c to stdout
 * @c; the charecter to print
 *
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
