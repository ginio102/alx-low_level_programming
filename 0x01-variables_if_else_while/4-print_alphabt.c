#include<stdio.h>
/**
 * main - program that writes the alphabet in lower case
 * Return: 0 (Success)
 */

int main(void)

{
	char n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	if (n == 101 || n == 113)
	{
		n++;
		continue;
	}
	putchar('\n')
	return (0);
}
