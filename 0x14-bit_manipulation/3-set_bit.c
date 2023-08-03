#include"main.h"
/**
 * set_bit - sets bit at given index to 1
 * @n: number changed
 * @index: of bit set to 1
 * Return: 1,
 * -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
