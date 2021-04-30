#include <stdio.h>

int main(void) {
  int x,y, *p;
  int *ptr;
  y=0;
  p=&y;
  x=*p;
  printf("%d ,%d ,%d\n",y)
  return 0;
}