#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * Return: 1 if letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
