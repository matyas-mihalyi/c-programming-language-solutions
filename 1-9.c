#include <stdio.h>

/* Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.*/
main () {
  int c, previous_is_blank;
  previous_is_blank = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ' && previous_is_blank == 1) {
      putchar(' ');
      putchar(c);
      previous_is_blank = 0;
    } else if (c != ' ') {
      putchar(c);
      previous_is_blank = 0;
    } else 
      previous_is_blank = 1;
  }
}