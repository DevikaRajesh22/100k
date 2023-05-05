#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
  char str[100];
  int i, j, len, flag = 0;
  printf("Enter a string: \n");
  fgets(str, sizeof(str), stdin);
  len = strlen(str);
  for (i = 0, j = len - 2; i < len / 2 && j >= len / 2; i++, j--) {
    if (str[i] != str[j]) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("%s is a palindrome\n", str);
  } else {
    printf("%s is not a palindrome\n", str);
  }

  return 0;
}
