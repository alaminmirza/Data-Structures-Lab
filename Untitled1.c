#include <stdio.h>

int main() {
  int n;
  int values[100];

  printf("Enter Number:\n ");
  scanf("%d", &n);


  for(int i = 0; i < n; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying Array:\n ");


  for(int i = 0; i < n; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
