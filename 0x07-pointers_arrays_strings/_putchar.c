#include<unistd.h>
/**
* _putchar - prints character
* @c: character to print
* Return: on succes 1
* on error, -1 is returned or errno appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
