/*
4. Print elements of an array in reverse order using a pointer.*/

#include <stdio.h>

int main(void){
  int arr[]={1,2,3,4,5};
  int i,*poi = arr;

    for(i=4;i>=0;i--){
      printf("%d", poi[i]);
      }
  return 0;

}
