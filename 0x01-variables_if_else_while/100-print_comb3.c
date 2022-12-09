#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void) {
  for (int i = 0; i <= 9; i++)
  {
    for (int j = i + 1; j <= 9; j++)
    {
      putchar(i + '0');
      putchar(',');
      putchar(' ');
      putchar(j + '0');
    }
  }

  return (0);
}

