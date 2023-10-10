#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
  const char * str = "ana are mere multe\0";
  puts(str);
  return EXIT_SUCCESS;
}
