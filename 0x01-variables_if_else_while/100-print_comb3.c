 #include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void) {
  int i = 0;
  while (i <= 9)
  {
    int j = i + 1;
    while (j <= 9)
    {
      putchar(i + '0');
      putchar(',');
      putchar(' ');
      putchar(j + '0');
      j++;
    }
    i++;
  }

  return (0);
}
