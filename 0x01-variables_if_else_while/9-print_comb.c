#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  for (int i = 0; i <= 9; i++)
  {
    for (int j = 0; j <= 9; j++)
    {
      putchar(i + '0');
      putchar(',');
      putchar(' ');
      putchar(j + '0');
      putchar('\n');
    }
  }

  return (0);
}

