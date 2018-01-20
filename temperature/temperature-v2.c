#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main(void)
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  fahr = lower;
  printf("F\tC\n");
  while (fahr <= upper)
  {
    celsius = 5 * (fahr-32) / 9;
    /* augment each %d with a width, the numbers will be right-justified in
      their fields */
    printf("%3d\t%6d\n", fahr, celsius);

    fahr = fahr + step;
  }
}
