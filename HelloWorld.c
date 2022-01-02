#include <stdio.h>

int main(){
  
  /// User Input

  int age;
  char name [20]; 

  printf("Enter your name\n");
  scanf("%s\n",name);
  printf("Name is %s",name);
  printf("Enter your age\n");
  scanf("%d", &age);


  return 0;
}