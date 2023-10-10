#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int size = 10;
  int array[size];
  int t;
  int i, j;

  srand(time(NULL));

  for (i = 0; i < size; i++) {
    array[i] = rand() % 100;
    if (i > 0) {
      while (array[i] == array[i - 1]) {
        array[i] = rand() % 100;
      }
    }
  }

  printf("Original array:\n");
  for (i = 0; i < size; i++) {
    printf("%d\t", array[i]);
  }

  for (i = 0; i < size; i++) {
    for (j = 0; j < size - 1; j++) {
      if (array[j + 1] < array[j]) {
        t = array[j];
        array[j] = array[j + 1];
        array[j + 1] = t;
      }
    }
  }

  printf("\nSorted array:\n");
  for (i = 0; i < size; i++) {
    printf("%d\t", array[i]);
  }
  printf("\n");

  return 0;
}
