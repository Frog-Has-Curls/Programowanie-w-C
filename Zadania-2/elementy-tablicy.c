/*Napisz program, który wypisuje elementy tablicy liczb całkowitych o znanej wielkości. Aby zadeklarować tablicę możemy zadać np.:
int tab[] = {1,2,3};
Aby wypisać np. drugi element tablicy zawołamy na tab[1]
Tablicę możemy też tylko zainicjować,bez podania elementów:
int tab[5];
Wypisz elementy tej tablicy. Jakie wartości wypisano?*/

#include<stdio.h>
int main(void){

int i;
int tab[5];
printf("podaj 5 liczb do tablicy oddzielone przecinkiem\n");
scanf("%d,%d,%d,%d,%d",&tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);


for(i=0;i<=4;i++){
printf("%d element tablicy to %d \n",i+1, tab[i]);
}

return 0;
}
