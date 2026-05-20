#include <stdio.h>

struct datastr {
  int a;
  int b;
};

struct datastr swap_str(struct datastr data) {
  struct datastr result = {data.b, data.a};
  return result;
}

void print_str(struct datastr data) { printf("%d, %d\n", data.a, data.b); }

int main(void) {
  long step_count = 1e10;
  struct datastr data = {1, 2};
  printf("Before loop:\n");
  print_str(data);
  for (long i = 0; i < step_count; ++i) {
    data = swap_str(data);
  }
  printf("After loop:\n");
  print_str(data);
}
