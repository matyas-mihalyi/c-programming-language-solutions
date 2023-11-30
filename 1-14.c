#include <stdio.h>

#define FIRST_CHARCODE 9
#define LAST_CHARCODE 255
#define NUM_OF_CHARS LAST_CHARCODE-FIRST_CHARCODE

main () {
  int c, i;
  int chars[NUM_OF_CHARS], charsClone[NUM_OF_CHARS];
  int max_count = 0;
  // fill up array in which it counts number of occurences for each char
  for (i = 0; i < NUM_OF_CHARS; i++) {
    chars[i] = 0;
  };
  // while char is not EOF add to count
  while ((c = getchar()) != EOF)
  {
    i = c - FIRST_CHARCODE;
    ++chars[i];
    // update max count
    if (chars[i] > max_count) {
      max_count = chars[i];
    } 
  }
  
  // clone chars array
  for (i = 0; i < NUM_OF_CHARS; i++)
  {
    charsClone[i] = chars[i];
  }

  // print columns for chars that occurred at least once
  putchar('\n');
  while (max_count-- > 0) {
    for (i = 0; i < NUM_OF_CHARS; i++)
    {
      // check if occurred at least once
      if (charsClone[i] > 0) {
        // if it's equal to max count print _
        if (charsClone[i] > max_count)
        {
          putchar('*');
        }
        else
        {
          putchar(' ');
        }
      }
    }
    putchar('\n');
  }
  // print bottom row with chars
  for (i = 0; i < NUM_OF_CHARS; i++) {
    if (chars[i] > 0)
    // newline tab should be handled here probably
    {
      printf("%c", i + FIRST_CHARCODE);
    }
  }
}