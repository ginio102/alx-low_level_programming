#include"main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * _isupper - check if uppercase letter
 * @c: upper case letter to check for
 * Return: if uppercase return 1, if not return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
