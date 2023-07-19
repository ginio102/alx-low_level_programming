#include"3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * op_add - adds intergers
 * @a: input
 * @b: input
 * Return: Interger
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts intergers
 * @a: input
 * @b: input
 * Return: Interger
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies intergers
 * @a: input
 * @b: input
 * Return: Interger
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides intergers
 * @a: input
 * @b: input
 * Return: Interger
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder intergers in division
 * @a: input
 * @b: input
 * Return: remainder of intergers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
