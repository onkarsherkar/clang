#include <stdio.h>

int main(){
  // Single line comment
  /* Multi
    line
    comment
  */
  int x;
  x = 123;
  int y = 321;

  int age = 25;
  float gpa = 9.01;
  char grade = 'C'; //single character
  char name[] = "home";
  printf("Your age is %d\n",age);
  printf("Hello %s\n", name);
  printf("Your average grade is %c",grade);
  printf("Your gpa is %f", gpa);
  return 0;
}