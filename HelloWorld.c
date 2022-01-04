#include <stdio.h>
#include<math.h>

int main(){
  
  /// If statements
  int age;

  printf("\n Enter your age:");
  scanf("%d", &age);

  if(age >= 18){
    printf("Your are now eligible for vote");

  }
  else{
    printf('You are not eligible to vote');
  }


  

  return 0;
}