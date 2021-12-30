#include <stdio.h>

int main(){
  /// Arithmetic Operators

  // + addition
  // - substraction
  // * multiplication
  // / division
  // % Moodulus
  // ++ increment
  // -- decrement

  int x = 5;
  int y = 2;

  int z = x + y;
  

  printf("Addition of %d and %d is %d\n", x, y, z);

  z = x - y;
  printf("Substraction of %d and %d is %d\n", x, y,z);

  z = x * y;
  printf("Multiplication od %d and %d is %d\n", x, y, z);

  z = x / y;
  printf("Division of %d and %d is %d\n", x, y, z);

  z = x % y;
  printf("Modulus of %d and %d is %d\n", x, y, z);

  x++;
  printf("Increment of x is %d\n", x);

  y--;
  printf("Decrement of y is %d\n", y);

  return 0;
}