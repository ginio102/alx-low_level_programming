#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds all intergers
 * @n: number of intergers in function
 * @...: variable number of intergers
 * Return: if n is equal to 0, 0.
 * if not, add all intergers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
