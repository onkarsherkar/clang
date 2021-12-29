#include <stdio.h>
#include<stdbool.h>

int main(){
  char a = 'C';
  char b[] = "asd";

  float c = 2.36;
  double d = 3.14169258697412;

  bool e = true;
  char f = 100;

  unsigned char g = 255;

  short h = 32767;
  unsigned short i = 65535;

  int j = 214569;
  unsigned int k = 425698523;

  long long int l = 9221113654789;
  unsigned long long int m = 184236545669;

  printf("%c\n", a);
  printf("%s\n", b);
  printf("%0.2f\n",c);
  printf("%0.10lf\n", d);
  printf("%d\n", e);
  printf("%c\n", f);
  printf("%d\n", g);
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%llu\n", m);
  return 0;
}