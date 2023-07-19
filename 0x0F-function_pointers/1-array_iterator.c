#include"function_pointers.h"
/**
 * array_iterator - function given as parameter of array
 * @array: input array
 * @size: of input array
 * @action: input command
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
