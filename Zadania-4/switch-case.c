/*
Napisz program, który wypisuje kolejne liczby z zakresu od k do n (przy czym mod(k), mod(n) < 1000), a następnie mówi, czy:

liczba jest parzysta/nieparzysta
liczba jest pierwsza
Warunki:
program operuje tylko na liczbach dodatnich
output ma być sformatowany do kolumn
wiadomo, że użytkownik podaje liczby całkowite, ale nie jest powiedziane, czy przez pomyłkę nie poda liczby ujemnej jako zakresu (użyć zakresy - dostępne w gcc, nie są standardem C: https://www.tutorialspoint.com/using-range-in-switch-case-in-c-cplusplus )
OGRANICZENIE: poza liczbą pierwszą nie wolno korzystać z instrukcji warunkowej if else. Ale da się też zrobić liczbę pierwszą samym switchem z 1 casem :)*/

#include  <stdio.h>
#include <stdlib.h>
   
int checkprime(int num){
  int y,j=0,result;
   switch(num){
     case 2: result=1;break;
  }
  for(y=1; y<=num; y++){
      switch(num % y){
        case 0: j++;
      }
      switch(j){
        case 2: result=1;break;
        default: result=0;
      }
      }
      
return result;
}

int main(void){
int k,n,i;

printf("Podaj 2 liczby dodatnie\n");
  scanf("%d, %d",&k, &n);
switch(n){
  case 0 ... 1000: printf("\n");void abort(void);
  default:printf("Liczby muszą być dodatnie! \n"), abort();
}
switch(k){
  case 0 ... 1000: printf("\n");break;
  default:printf("Liczby muszą być dodatnie! \n"), abort();
}
  for(i=k; i<=n; i++){

switch (i % 2){
    case 0 : printf("%4d %15s\n", i,"jest parzysta"); break;
 
    default: printf("%4d %18s\n",i,"jest nieparzysta");break;
}

switch(i % n){
  case 1000: printf("Za duża liczba! Wpisz inną \n");
}

switch(checkprime(i)){
  case 1: printf("%4d %15s\n",i, "jest pierwsza");break;
  case 0: printf("%4d %19s\n",i, "nie jest pierwsza");break;
  default: printf("meh \n");break;
}
printf("\n");
  }
  
}
