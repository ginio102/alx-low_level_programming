#include "main.h"

/**
 * set_bit - sets a bit of a given index to 1
 * @n: pointer to desired number change
 * @index: index of bit to set
 * Return: 1 if set, -1 if not set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
