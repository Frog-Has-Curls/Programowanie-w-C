/*Przygotuj analogiczny, drugi program, który wypisuje elementy tablicy dwuwymiarowej o znanych wymiarach.
Uwaga! zadanie jest proste przy wykorzystaniu wskaźników, których jeszcze nie znacie. Dlatego tutaj można przyjąć, że w funkcji main deklarujemy tablicę i jej wymiary, np.:
int size1 = 3, size2 =2;
int array[][2]={{1,1},{3,-5},{5,12}};
A przy deklaracji funkcji:

int printArray(int size1, int size2, int array[][size2])
*/


#include <stdio.h>

int printArray(int size1, int size2, int arr[size1][size2])
{
  int i,y;
   for(i=0; i<size1; i++) {
      for(y=0;y<size2;y++) {
         printf("%d ", arr[i][y]);
         if(y==(size2-1)){
            printf("\n");
         }
      }
   }
   return 0;
}


int main (void)
{
	int size1 = 3, size2 =2;
  int ark[][2]={{1,1},{3,-5},{5,12}};

	printArray(size1,size2,ark);
}


