#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ITER 100000
#define SEED 123456
#define REPS_MAX 11

int main() {
  srand(SEED);
  int num = 0;
  int reps[ITER];
  int reps_count[REPS_MAX];
  for (int i = 0; i < REPS_MAX; ++i)
    reps_count[i] = 0;
  for (int i = 0; i < ITER; ++i)
    reps[i] = 0;
  for (int i = 0; i < ITER; ++i)
    ++reps_count[++reps[rand() % ITER]];
  for (int i = 1; i < REPS_MAX; ++i)
    printf("Reps: %2d, count: %6d\n", i, reps_count[i]);
}
