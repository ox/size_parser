#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
  long num_bytes;
  char * num = malloc(strlen(argv[1]) - 1);
  char * quant = malloc(3);

  strncpy(num, argv[1], strlen(argv[1]) - 2);
  strncpy(quant, argv[1] + strlen(num), 2);
  num_bytes = atol(num);

  printf("%li %s\n", num_bytes, quant);

  if (strcmp(quant, "KB") == 0) {
    num_bytes *= 1024;
  } else if (strcmp(quant, "MB") == 0) {
    num_bytes *= (1024 * 1024);
  } else if (strcmp(quant, "GB") == 0) {
    num_bytes *= (1024 * 1024 * 1024);
  }

  printf ("=> %li bytes\n", num_bytes);

  return 0;
}

