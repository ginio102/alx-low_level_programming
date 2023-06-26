#include"main.h"
#include<stdio.h>
/**
 * string_length - writes the length of a string
 * @str: string character
 * Return: Length of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
