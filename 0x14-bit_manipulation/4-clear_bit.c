#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @n: numbers
 * @index: given index
 * Return: 1, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
return (-1);
	*n &= ~(1 << index);
	return (1);
}
