/*Napisz program, który sprawdza, czy podany przez użytkownika rok jest przestępny.
Lata przestępne:

co 4 lata
nie są podzielne przez 100, chyba że
są podzielne przez 400*/

#include <stdio.h>
int main(void){

int rok,a;

printf("Podaj rok \n");
scanf("%d", &rok);
if(rok % 4 ==0 && rok%100 !=0){
printf("Rok %d jest przestępny ",rok);
}

else{
  printf("Rok %d nie jest przestępny ",rok);
}
  return 0;
}
