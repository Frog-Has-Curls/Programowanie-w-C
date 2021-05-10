/*
3. Swap two elements using call by reference (void swap(int* n, int* m)).*/

#include <stdio.h>

void swap(int* n, int* m){
  int temp;
  temp=*n;
  *n=*m;
  *m=temp;
}

int main(void){
  int a, b;
    printf("podaj 2 liczby całkowite \n");
    scanf("%d, %d", &a, &b);
    printf("a: %d \n", a);
    printf("b: %d\n",b);

  swap(&a, &b);
    printf("Po zamianie \na: %d, \nb: %d", a, b);
  
  return 0;

}

