#include<stdio.h>
/**
 * infinite loop - causes an infinite loop
 * Retrun: 0
 */

int infinite_loop(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	 * while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 */
	printf("Infinite loop avoided: \\o/\n");

	return (0);
}
