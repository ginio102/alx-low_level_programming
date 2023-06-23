#include"main.h"
/**
 * print line - function that draws a line in the terminal
 * Return: straight line in the terminal
 */
void print_line(int n)
{
	int x;

	if (n < 10)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
