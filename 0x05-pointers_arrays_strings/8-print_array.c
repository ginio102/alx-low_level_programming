#include"main.h"
#include<stdio.h>
/**
 * print_array - prints array
 * @a: array name
 * @n: number of array elements
 * Result: array elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
		if (j != (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf('\n');
	}
}
