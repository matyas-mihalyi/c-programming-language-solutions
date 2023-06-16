#include <stdio.h>

/* Write a program to print the value of EOF */
main () {
  int c;

  while ((c = getchar()) != EOF)
    ;
  printf("\nEOF is %d\n", c);
}