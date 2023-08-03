#include"main.h"
/**
 * get_bit - value of bit at index in decimal number
 * @n: searched integer
 * @index: of bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
