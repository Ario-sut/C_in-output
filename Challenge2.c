#include <stdio.h>

int main(){
  char name[50];
  int age;
  char school[10];

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your age : ");
  scanf("%s", age);
  printf("Enter your school : ");
  scanf("%s", school);

  printf("Hi! My name is %s and I am %s years old\nI study in %s", name, age, school);

  return 0;
}
