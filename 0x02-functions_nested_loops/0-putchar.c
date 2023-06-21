#include "main.h"
#include<unistd.h>
#include<stdio.h>
/**
 * _start - program that prints _putchar and a new line
 * @ c: print character
 * On error, -1 is returned, and errno is set appropriately
 * Return: 0 (Success)
*/
int _putchar(char: 0)

{
	return write(1, &c, 1);
}
