#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3};

  int *p = arr;

  printf("%d\n", *(p+3));
}