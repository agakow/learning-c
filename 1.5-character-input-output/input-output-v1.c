#include <stdio.h>

/* copy input to output */

int main(void)
{
  int c;
  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}
