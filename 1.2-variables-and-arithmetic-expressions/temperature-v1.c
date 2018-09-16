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
    /* The reason for multiplying by 5 and then dividing by 9 instead of just
      multiplying by 5/9 is that in C, integer division truncates and any fraction
      part is discarded, so 5/9 would be reported as 0 */

    celsius = 5 * (fahr-32) / 9;

    /* printf - general-purpose output formatting function. It is not part of
      the C language, it is part of the standard library of functions */
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
