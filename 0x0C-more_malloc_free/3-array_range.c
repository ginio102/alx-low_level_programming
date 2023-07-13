#include"main.h"
#include<stdlib.h>
/**
 * array_range - creates a range of intergers
 * @min: minimum interger in range
 * @max: maximum interger in range
 * Return: Interger
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
