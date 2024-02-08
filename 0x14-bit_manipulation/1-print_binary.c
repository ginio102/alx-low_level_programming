#include "main.h"

/**
 * _pow - function calculates bases and powers
 * @base: base
 * @power: power
 * Return: value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}
