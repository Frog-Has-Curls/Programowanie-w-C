/*Zaokrąglenie
Napisz program, który:

wypisuje zaokrąglenie liczby zmiennoprzecinkowej do jedności
oraz rzutuje liczbę na typ całkowity.
Czy wynik w obu przypadkach zawsze jest ten sam?*/

#include<stdio.h> 
int main() 
{ 
  float x;
  printf("Wpisz liczbę z przecinkiem\n");
  scanf("%f",&x); //wpisujemy liczbe z przecinkiem

	int a = x;
  int b =(int)x;

  printf("Wynik int a=x : %d \nWynik int b=(int)x : %d", a,b);

    return 0; 
    }

//wydaje sie, ze nie ma roznicy
