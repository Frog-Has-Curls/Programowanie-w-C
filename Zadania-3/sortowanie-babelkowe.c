/*Proszę napisać program sortujący tablicę liczb całkowitych za pomocą naiwnego algorytmu bąbelkowego. Na wejściu program przyjmuje tablicę podaną jako zmienną w funkcji main. Program ma sam sprawdzać długość tablicy (funkcja sizeof). Na wyjściu program zwraca posortowane liczby.
Przypomnienie:
Naiwne sortowanie bąbelkowe polega na wykonaniu n-1 przejść po n-elementowej tablicy. Jeżeli liczba i jest większa od i+1 to następuje ich zamiana. Taki cykl operacji jest powtarzany dopóki nie dojdzie do żadnej podmiany.*/

#include <stdio.h>

int bbsort(int arr[],int n){
int i,zm, temp;

zm=0;
while (zm==0){
  zm=1;
  for (i =0; i < n-1; i++){
    if (arr[i]> arr[i+1]){
      zm=0;
      temp= arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  }
}
for (i=0; i<n; i++){
  printf("%d  ", arr[i]);
}
  return 0;
}
int main(void){

int tab[]={2,3,1,3,5};
int n=sizeof tab/sizeof *tab;
bbsort(tab, n);

  return 0;
}
