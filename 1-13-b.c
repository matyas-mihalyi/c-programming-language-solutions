#include <stdio.h>

#define MAX_WORD_LENGTH 10
#define MAX_COUNT 30

main () {
  int c, i, wlength, highest_count;
  int words[MAX_WORD_LENGTH];
  float percent;
  wlength = highest_count = 0;

  for (i = 0; i < MAX_WORD_LENGTH; i++)
    words[i] = 0;

  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n' || c == '\t' || c == '\0') && wlength > 0) {
      if (wlength > MAX_WORD_LENGTH)
        wlength = MAX_WORD_LENGTH;

      ++words[wlength - 1];
      
      if (words[wlength - 1] > highest_count)
        highest_count = words[wlength - 1];
      
      wlength = 0;
    } else if (c != ' ' || c != '\n' || c != '\t' || c!= '\0') {
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

  putchar('\n');
  while (highest_count > 0) {
    for (i = 0; i < MAX_WORD_LENGTH; i++) {
      if (words[i] >= highest_count) {
        putchar('-');
        putchar(' ');
      } else {
        putchar(' ');
        putchar(' ');
      }
    }
    putchar('\n');
    highest_count--;
  }

  for (i = 0; i < MAX_WORD_LENGTH; i++) {
    if (i + 1 == MAX_WORD_LENGTH)
      printf("%d+", i + 1);
    else
      printf("%d ", i + 1);
  }

  putchar('\n');
}