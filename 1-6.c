#include <stdio.h>

/* Verify that expression getchar=() != EOF is 0 or 1 */
main () {
  int c;

  while (c = getchar()) {
    if ((c != EOF) == 1) {
      putchar(c);
    } else if ((c != EOF) == 0) {
      break;
    }
  }
}