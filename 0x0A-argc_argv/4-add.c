#include"main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * main - sum of positive numbers in argument
 * @argc: input counter
 * @argv: input vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
