#include<stdio.h>
#include"main.h"
/**
 * _strlen - writes the length of a string
 * @str: string character
 * Return: Length of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
