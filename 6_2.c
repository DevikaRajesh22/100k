#include <stdio.h>

int main() {
  int arr1[3][3], arr2[3][3], sum[3][3], i, j;

  printf("Enter elements of first array:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter elements of second array:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &arr2[i][j]);
    }
  }

  printf("Sum of two arrays:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      sum[i][j] = arr1[i][j] + arr2[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
