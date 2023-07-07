#include"main.h"
/**
 * *_memcpy - copies memory area
 * @dest: storage area
 * @src: source
 * @n: bytes
 * Return: copy with number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
