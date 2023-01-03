#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character cto sdtout @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
{
	return (write(1, &c, 1));
}
