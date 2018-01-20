#include <stdio.h>

/* print Celsius-Fahrenheit table */
int main(void)
{
  float celsius, fahr;
  int lower, upper, step;

  lower = -20;
  upper = 100;
  step = 10;

  celsius = lower;
  printf("%3c\t%3c\n", 'C', 'F');
  while(celsius <= upper) {
    fahr = (9.0/5.0) * (celsius + 32.0);
    printf("%6.1f\t%3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }

}
