/*Napisz program który pyta osobno o imię i nazwisko, a następnie wypisuje inicjały.
Trudniejsze: Dodaj funkcję, która podaje ile liter ma nazwisko.*/

#include <stdio.h>

int main(void){

char imie[20], nazwisko[20];

printf("Podaj imię \n");
scanf("%s", imie);
printf("Podaj nazwisko \n");
scanf("%s", nazwisko);

printf("Imicjały to %c.%c \n",imie[0],nazwisko[0]);
  return 0;
}

