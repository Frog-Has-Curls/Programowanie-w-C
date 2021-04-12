/*Nie trzeba robić:

WAŻNE! Elementy tablicy

Napisz program, który wypisuje wszystkie elementy jednowymiarowej tablicy liczb całkowitych. Tablica podana jest w funkcji main jako stała o znanej długości. Funkcja wypisująca elementy ma przyjmować tablicę intów i jej długość. Wykorzystaj istniejący kod. Można zmieniać tylko miejsce oznaczone oraz samą tablice w funkcji main:
https://github.com/krzysztofmakuch/intro_C/blob/master/print1DArray.c*/


#include <stdio.h>

int printArray(int array[], int size)
{
  int i;
	  for (i = 0; i < size; i++ ) {
      printf("Element[%d] = %d\n", i, array[i] );
   }
   return 0;
}


int main (void)
{
	int array[]={3,-5,5,12};
	int arrayLen = sizeof(array)/sizeof(int);
	printArray(array, arrayLen);
}