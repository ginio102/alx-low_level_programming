#include"main.h"
#include<stdio.h>
/**
 * print_rev - prints string in reverse with a new line
 * *str: string to be printed
 */
void print_rev(char *s)
{
	int longi = 0;
		int o;

		while (*s != '\0')
		{
			longi++;
			s++;
		}
		s--;
		for (o = longi; o > 0; o--)
		{
			_putchar(*s);
			s--;
		}
		_putchar('\n');
}
