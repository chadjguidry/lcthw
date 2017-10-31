#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
  int distance = 100;
  int minutes = 100;

  // this is also a comment
  printf("You are %d miles away.\n", distance);
  printf("You are %d minutes away.\n", minutes);
  printf("That is, if you travel %dmph.\n", distance / minutes * 60);

  return 0;
}
