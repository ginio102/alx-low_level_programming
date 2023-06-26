#include"main.h"
#include<stdio.h>
/**
 * puts - prints string and new line to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
