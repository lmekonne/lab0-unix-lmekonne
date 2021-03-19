#include <stdio.h>

/* this program prints a specific sentence based on 
the number of arguments provided */ 

int main (int argc, char** argv) {

  if (argc == 2) {

    // there is only 2 items
    printf("I like %s\n", argv[1]); 

  } else {

    // there are 1 item  or more than 2 items
    printf("What do I like?\n"); 

  }

  return 0;
}
