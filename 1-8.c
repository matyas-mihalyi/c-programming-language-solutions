#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines */
main () {
  int blanks, tabs, newlines, c;

  blanks = tabs = newlines = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++newlines;
  }
  printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
}