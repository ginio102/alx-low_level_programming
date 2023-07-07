#include "main.h"
/**
 * _puts - prints string to standard output
 * @str: string to print
 * putting character prints new line
 * Return:
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
