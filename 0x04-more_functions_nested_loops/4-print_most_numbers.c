#include"main.h"
/**
 * print numbers - prints numbers between 0 to 9
 * @2: do not print
 * @4: do not print
 * Return: numbers between 0 to 9
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if
			(x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
