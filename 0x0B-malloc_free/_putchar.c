#include<unistd.h>
#include"main.h"
/**
 * _putchar - prints character
 * @c: character to print
 * Return: on succes 1on error, -1 is returned or errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

