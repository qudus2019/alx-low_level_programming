#include <stdio.h>
/**
 * _putchar- function that prints the specified string
 * Return_ : Always 0 (Success)
 * @str: string to be printed
 */
int _putchar(char* str)
{
	printf("%s", str);
	return (0);
}

void print_alphabet(void)
{
	char i = 'z';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
}
