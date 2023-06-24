#include <stdio.h>

#define TRUE 1
#define FALSE 0

main () {
  int c, previous_is_whitespace;
  while ((c = getchar()) != EOF) {
    if (previous_is_whitespace == TRUE && (c == ' ' || c == '\n' || c == '\t'))
      ;
    else if (c == ' ' || c == '\t' || c == '\n') {
      putchar('\n');
      previous_is_whitespace = TRUE;
    } else {
      putchar(c);
      previous_is_whitespace = FALSE;
    }
  }
}