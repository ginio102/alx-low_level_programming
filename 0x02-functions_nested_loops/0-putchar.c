#include<unistd.h>
#include "main.h"
/**
 * main - writes the character c stdout
 * _start : The character to print
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropriately
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
