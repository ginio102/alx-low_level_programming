#include "main.h"
/**
 * print_sign - program that prints the sign of a number
 * @n: input number as an interger
 * Return: Always 0 (Success), return 1 if positive, return -1 if otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
	_putchar(43);
	return (1);
	}
	else if
		(n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
