/*Napisz program który pyta osobno o imię i nazwisko, a następnie wypisuje inicjały.
Trudniejsze: Dodaj funkcję, która podaje ile liter ma nazwisko.*/

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void){

char imie[20], nazwisko[20];
int count = 0,i;

printf("Podaj imię \n");
scanf("%s", imie);
printf("Podaj nazwisko \n");
scanf("%s", nazwisko);

printf("Imicjały to %c.%c \n",imie[0],nazwisko[0]);


  for (i = 0; nazwisko[i] !='\0'; i++) {
    if (isalpha(nazwisko[i])) {
      count++;
        }
    }
    printf("%d\n", count);


  return 0;
}
