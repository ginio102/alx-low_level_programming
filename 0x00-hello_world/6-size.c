#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Retun: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: 1 byte(s)\n", sizeof(1));
printf("Size of a int: 4 byte(s)\n", sizeof(4));
printf("Size of a long int: 4 byte(s)\n", sizeof(8));
printf("Size of a long long int: 8 byte(s)\n", sizeof(8));
printf("Size of a float: %lu  byte(s)\n", sizeof(4));
return (0);
}
