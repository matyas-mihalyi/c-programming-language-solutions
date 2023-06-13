#include <stdio.h>

/* Write a program to print 
the corresponding Celsius to Fahrenheit table */
void main () {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* lower limit of temperatuire scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  celsius = lower;
  printf("%3s %6s\n", "C", "F");
  while (celsius <= upper) {
  fahr = celsius * (6.0/9.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}