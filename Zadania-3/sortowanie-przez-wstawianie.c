/*Sortowanie przez wstawianie polega na tym, że bierzemy elementy tablicy od drugiego i porównujemy z kolejnymi liczbami 'na lewo' od tego elementu dopóki element jest mniejszy (w tablicy rosnącej):

tab[] = {5, 1, 4, 3}
bierzemy tab[1] = 1 i porównujemy z tab[0] = 5. Ponieważ tab[1] < tab [0] to przesuwamy tablicę i dostajemy {1, 5, 4, 3}
teraz bierzemy tab[2]: tab[2] < tab[1], więc sprawdzamy dalej, czy tab[2] < tab[0]. Nie jest, więc dostajemy {1, 4, 5, 3}
teraz bierzemy tab[3] i analogicznie: tab[3]<tab[2], tab[3]< tab[1], ale tab[3]>tab[0], więc kończymy porównywanie (niezależnie od tego, że jest to ostatni element z którym można porównać):
{1,3,4,5}*/
#include <stdio.h>
int psort(int arr[],int n){
int i,y, temp;

    for (i = 1; i < n; i++) {
        temp = arr[i];
        y = i - 1;
 
        while (y >= 0 && arr[y] > temp) {

            arr[y + 1] = arr[y];
            y = y - 1;
        }
        arr[y + 1] = temp;

    }

  for (i = 0; i < n; i++)
    printf("%d  ", arr[i]);

return 0;
}

int main(void){

int tab[]={5, 1, 4, 3};
int n=sizeof tab/sizeof *tab;
psort(tab, n);

  return 0;
}
