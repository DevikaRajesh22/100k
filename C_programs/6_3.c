#include <stdio.h>

void getArray(int arr[], int limit);
void displayArray(int arr[], int limit);

int main() {
  int arr[100], limit;

  printf("Enter the size of the array: ");
  scanf("%d", &limit);

  getArray(arr, limit);

  printf("The array is: ");
  displayArray(arr, limit);

  return 0;
}

void getArray(int arr[], int limit) {
  int i;

  printf("Enter the elements of the array:\n");
  for (i = 0; i < limit; i++) {
    scanf("%d", &arr[i]);
  }
}

void displayArray(int arr[], int limit) {
  int i;

  for (i = 0; i < limit; i++) {
    printf("%d ", arr[i]);
  }
}
