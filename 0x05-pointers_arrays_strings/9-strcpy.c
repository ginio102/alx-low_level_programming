#include"main.h"
#include<stdio.h>
/**
 * _strcpy - copies a string
 * @dest: destination value
 * @src: source value
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[1] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
