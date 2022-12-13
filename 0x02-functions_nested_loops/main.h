/**
 * myFunc - function that prints the specified string
 * Return_ : Always 0 (Success)
 * @st+/(r: string to be printed
 */
int _putchar(char str[])
{
	printf("%s", str);
	return (0);
}

void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
}
