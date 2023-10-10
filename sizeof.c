#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  const char str[] = "she has apples";
  printf("%ld\n", sizeof(str));
  printf("%ld\n", strlen(str));
  return EXIT_SUCCESS;
}
