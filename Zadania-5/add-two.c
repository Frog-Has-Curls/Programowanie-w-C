/*1. Add two numbers using pointers.*/



#include <stdio.h>

int main(void) {
  int *poi, i=4,*poi2, j=7, sum;
     poi=&i;
     poi2=&j;
  sum= *poi + *poi2;
  printf("%d ", sum);
  return 0;
}