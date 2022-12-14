#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * return: Always 0
 */
int main(void)
{
	char* str[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}
