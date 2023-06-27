#include <stdio.h>

#define MAX_WORD_LENGTH 10

main () {
  int c, i, w_over_limit, wlength, highest_count;
  int words[MAX_WORD_LENGTH];
  float percent;
  wlength = highest_count = w_over_limit = 0;

  for (i = 0; i < MAX_WORD_LENGTH; i++)
    words[i] = 0;

  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n' || c == '\t') && wlength > 0) {
      if (wlength > MAX_WORD_LENGTH)
        wlength = MAX_WORD_LENGTH;

      ++words[wlength - 1];
      
      if (words[wlength - 1] > highest_count)
        highest_count = words[wlength - 1];
      
      wlength = 0;
    } else if (c != ' ' || c != '\n' || c != '\t') {
      ++wlength;
    }
  }

  if (wlength > 0) {
    if (wlength > MAX_WORD_LENGTH)
      wlength = MAX_WORD_LENGTH;

    ++words[wlength - 1];
    
    if (words[wlength - 1] > highest_count)
      highest_count = words[wlength - 1];
    
    wlength = 0;
  }

  percent = highest_count / 100.0;

  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    words[i] = words[i] / percent;

    if (i + 1 == MAX_WORD_LENGTH)
      printf("\n+%2d ", i + 1);
    else
      printf("\n%3d ", i + 1);

    while (words[i] > 0) {
      putchar('|');
      --words[i];
    }
  }

  putchar('\n');
}