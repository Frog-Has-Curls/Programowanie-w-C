/*Napisz program, który wypisuje n kolejnych liczb pierwszych, gdzie n jest podane przez użytkownika i zawsze większe lub równe 1.

Najmniejszą liczbą pierwszą jest 2.
Można użyć algorytmu naiwnego.
Przykładowe liczby pierwsze:
2, 3, 5, 7, 11, 13, 17, 19*/

#include <stdio.h>
int czypierw(int num);
int main(void){

int liczba,y,ite=0,n=2,flaga=0;

printf("ile liczb pierwszych chcesz zobaczyć? \n");
scanf("%d", &liczba);

while(ite<liczba){
  while(flaga<=0){
    
    y=czypierw(n);
    n++;

    if (y!=0){
     
      printf("%d ", y);
      ite++;
      if(ite==liczba){
        flaga=1;//zmienimy flagę jak będziemy mieć tyle liczb ile chcemy
      }
      }
  }
    }
  return 0;
}

int czypierw(num){
    int i=1,p=0,result=0;
    
  if (num ==2){
    result=num;}

   for(i=1;i<=num;i++){
     
    if (num % i ==0){
      p++; //liczymy dzielniki liczby
      }
}
if(p==2)//jesli ma tylko 2 to znaczy ze jest pierwsza (siebie i 1)
   {
      result=num;
   }
  return result; 
}


