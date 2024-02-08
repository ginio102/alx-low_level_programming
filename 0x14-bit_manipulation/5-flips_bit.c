#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to change
 * @n: first integer
 * @m: second integer
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, rounder = 0;
unsigned long int previous;
unsigned long int ex = n ^ m;

for (k = 63; k >= 0; k--)
{
previous = ex >> k;
if (previous & 1)
rounder++;
}
return (rounder);
}
