// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>
void print_conversion (float lower, float upper, float step); 

int main()
{
  float lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  print_conversion(lower, upper, step);
}

void print_conversion (float lower, float upper, float step) 
{
  float fahr, celsius;
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n",fahr,celsius);
    fahr=fahr+step;
  }
}
