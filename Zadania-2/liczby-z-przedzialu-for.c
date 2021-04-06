/*
Napisz program, który wypisuje wszystkie liczby z przedziału <0, n>, gdzie n jest podane przez użytkownika.
Napisz 2 programy - jeden z pętlą while, drugi for

Zmodyfikuj jeden z programów tak, aby korzystając z osobnej funkcji sprawdzającej czy liczba jest parzysta wypisywał tylko liczby parzyste.
*/



#include<stdio.h>
// deklaracja funkcji
int parz(int num1);
int main(void){

int licz,czy;
int i=0;

printf("Podaj liczbę całkowitą\n");
scanf("%d",&licz);
//for loop

for(i=0;i<=licz;i++){
  czy=parz(i);
  if (czy!=1){//chce wyniki tylko dla parzystych
  printf("%d \n", czy);}
}

  return 0;
}
//funkcja zwracająca parzyste liczby z przedziału
int parz(int num) {

  int result;
  
  if(num % 2 ==0){
   result=num;
   }
   else{
     result=1;/*flaga poniewaz nie moge uzyc null (0 moze byc wynikiem)*/
   }

   return result; 
}
