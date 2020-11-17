#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300 */

main()
{
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit of temperature table */
  step = 20;    /* step size */

  celsius = lower;
  while ( celsius <= upper) {
    fahr = (celsius * 1.8) + 32.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    celsius = celsius + step;
  }
}
