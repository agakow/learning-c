#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300;
    floating point version */
int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  fahr = lower;
  printf("F\tC\n");
  while (fahr <= upper)
  {
    /* We were unable to use 5/9 in the previous version, however here the
      value will not be truncated to zero because it is a ratio of two floating
      point numbers */

    /* If  an arithmetric operator has integer operands, an integer operation is
      performed. If an arithmetric operator has one integer and one floating-point
      operand, the integer will be converted to a floating point before the
      operation is done */

    /* The 32.0 could have been left as 32, but good to change to floating point
      for more clarity when reading */

    celsius = (5.0/9.0) * (fahr-32.0);

    /* 3.0f - at least 3 digits wide and no decimal point
      6.1f - at least 6 digits wide and 1 decimal point */

    printf("%3.0f\t%6.1f\n", fahr, celsius);

    fahr = fahr + step;
  }
}
