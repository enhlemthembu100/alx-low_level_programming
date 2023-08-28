#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the chara c to stdout
 * @c: The char to print
 *
 * Return: to success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
