#include <stdio.h>
#include<math.h>

int main(){
  
  /// Switch case

  char grade;

  printf("\nEnter a letter grade:");
  scanf("%c", &grade);

  switch (grade)
  {
    case 'A':
      printf("perfect");
      break;

    case 'B':
      printf("Good");
      break;

    case 'C':
      printf("average");
      break;
    
    case 'D':
      printf("OK");
      break;

    default:
      printf("Not selected");
      break;
  }


  return 0;
}