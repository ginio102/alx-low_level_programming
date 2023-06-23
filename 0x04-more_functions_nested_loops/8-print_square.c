#include"main.h"
/**
 * print_squares - prints n squares according to n times
 * @size: the number of squares
 * Return: empty
 */
void print_square(int n)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
