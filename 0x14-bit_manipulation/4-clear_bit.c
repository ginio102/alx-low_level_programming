#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: pointer to number to clear
 * @index: index of bit to clear
 * Return: 1 if clear, -1 if not clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
