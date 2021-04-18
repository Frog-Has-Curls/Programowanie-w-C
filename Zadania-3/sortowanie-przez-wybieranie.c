/*Chyba najprostsze koncepcyjnie sortowanie:
znajdź najmniejszy element w nieposortowanym zbiorze
wstaw najmniejszy element na pierwszą pozycję nieposortowanego zbioru
czyli:
tab = {1,0,9,8}
najmniejsze jest 0, więc zamieniamy z tab[0]:
{0,1,9,8}
pozycja tab[0] przestaje nas interesować, najmniejszy element w pozostałym zbiorze {1,9,8} to 1 i jest na pierwszej pozycji
pozycja tab[1] przestaje nas interesować, najmniejszy element w pozostałym zbiorze {9,8} to 8 i zamieniamy go z elementem na pierwszej pozycji w tym co nas interesuje, czyli tab[2] = 9
{1,0,8,9}
Posortowane.*/

#include<stdio.h>

int swap(int x, int y){
  int temp;
  temp=x;
  x=y;
  y=temp;

  return 0;
}

int sort(int tablica[], int rozmiar){
  int min, i,j;
  int temp;

  for (i=0; i< rozmiar ; i++){
    min=i;
    for (j=i+1; j <rozmiar; j++){
    if (tablica[min] > tablica[j]){
      min=j;
      
      if (min != i){
        temp= tablica[i];
        tablica[i]=tablica[min];
        tablica[min]=temp;
      }
  }
}
}
  printf("Posortowana lista :\n");

  for (i = 0; i < rozmiar; i++)
    printf("%d  ", tablica[i]);

  return 0;
}

int main(void){
int tab[]={1,0,9,8};

sort(tab,4);

  return 0;
}


