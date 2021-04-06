/*
Napisz program, który wypisuje wszystkie liczby z przedziału <0, n>, gdzie n jest podane przez użytkownika.
Napisz 2 programy - jeden z pętlą while, drugi for

Zmodyfikuj jeden z programów tak, aby korzystając z osobnej funkcji sprawdzającej czy liczba jest parzysta wypisywał tylko liczby parzyste.
*/


#include<stdio.h>

int main(void){

int licz;
int i=0;

printf("Podaj liczbę całkowitą\n");
scanf("%d",&licz);
//pętta while
while(i<=licz){
printf("%d \n",i);
i++;
}
}
