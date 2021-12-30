#include <stdio.h>

int main(){
  
  /// Agumented Assignment operator Ex. x = x + 1 => x += 1

  int x = 5;

  // x = x + 2
  x += 2;
  printf("%d\n", x);

  // x = x - 3
  x -= 3;
  printf("%d\n", x);

  // x = x * 4
  x *= 4;
  printf("%d\n", x);

  // x = x / 5
  x /= 5;
  printf("%d\n", x);

  // x = x % 2
  x %= 2;
  printf("%d\n", x);

  return 0;
}