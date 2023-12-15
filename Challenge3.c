#include <stdio.h>

int main(){
  int number;
  int i = 1;
  printf("Enter the number to print table : ");
  scanf("%d", &number);

  while (i < 11)
  {
    printf("%d x %d = %d\n", i, number, number * i);
    i++;
  }
  
  return 0;
}