#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void calculate_stats(double *x, size_t n);

int main() {
  const size_t count = 8;
  double *data = calloc(count, sizeof(double));
  if (data) {
    printf("data: ");
    for (size_t index = 0; index < count; ++index) {
      data[index] = ((double)rand() / RAND_MAX) * 100;
      printf("%f ", data[index]);
    }
    printf("\n");
    calculate_stats(data, count);
    free(data);
  }
}

void calculate_stats(double *x, size_t n) {
  if (x && n > 1) {
    double sum = 0.0;
    double mean = 0.0;
    double variance = 0.0;
    for (size_t index = 0; index < n; ++index) {
      sum += x[index];
    }
    mean = sum / n;
    for (size_t index = 0; index < n; ++index) {
      double diff = x[index] - mean;
      variance += diff * diff;
    }
    variance = variance / (n - 1);
    printf("mean: %f, variance: %f\n", mean, variance);
  }
}
