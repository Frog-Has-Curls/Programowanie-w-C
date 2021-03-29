/*Napisz program, który podaje, czy liczba podana przez użytkownika jest parzysta*/



#include <stdio.h>

int main(void)
{
  int liczba;
  printf("Podaj liczbę całkowitą \n");
  scanf("%d",&liczba);
 if(liczba % 2 ==0){
   printf("Liczba jest parzysta");}
 else {printf("Liczba jest nieparzysta");
 
 }
}
