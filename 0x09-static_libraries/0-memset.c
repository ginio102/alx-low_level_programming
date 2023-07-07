#include"main.h"
/**
 * *_memset - fills memory with a specific value
 * @s: address of memory to be filled
 * @b: value
 * @n: bytes to be changed
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	{
		s[a] = b;
		n--;
	}
	return (s);
}
