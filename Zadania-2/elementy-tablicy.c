/*Napisz program, który wypisuje elementy tablicy liczb całkowitych o znanej wielkości. Aby zadeklarować tablicę możemy zadać np.:
int tab[] = {1,2,3};
Aby wypisać np. drugi element tablicy zawołamy na tab[1]
Tablicę możemy też tylko zainicjować,bez podania elementów:
int tab[5];
Wypisz elementy tej tablicy. Jakie wartości wypisano?*/

#include<stdio.h>
int main(void){

int a,b,c,d,e;
int tab[5];
printf("podaj 5 liczb do tablicy oddzielone przecinkiem\n");
scanf("%d,%d,%d,%d,%d",&tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);

printf("pierwszy element tablicy to %d \n", tab[0]);
printf("drugi element tablicy to %d \n", tab[1]);
printf("trzeci element tablicy to %d \n", tab[2]);
printf("czwarty element tablicy to %d \n", tab[3]);
printf("piąty element tablicy to %d \n", tab[4]);

return 0;
}


//przyznam, nie bardzo zrozumiałam to zadanie
