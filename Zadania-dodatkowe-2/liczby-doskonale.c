/*Napisz program, który w zadanym przedziale wypisze wszystkie liczby doskonałe. 
Liczba doskonała to taka liczba, która jest sumą swoich dzielników całkowitych. 
Np. 6 ma dzielniki 1,2,3 - ich suma 1+2+3 = 6. Takich liczb jest bardzo niewiele. */



#include <stdio.h>
int czydosk(int num);//definicja funkcji pomocniczej
int main(void){

int liczba,y,ite;

printf("podaj liczbę całkowitą : \n");
scanf("%d", &liczba);

for(ite=1;ite<=liczba;ite++){
    y=czydosk(ite);
    if (y!=0){//wyświetlam tylko kiedy są doskonałe w zakresie
      printf("Liczba doskonała : %d \n",y);
      }
    
    }
  return 0;
}

int czydosk(num){
    int i,result=0,wynik;
    
   for(i=1; i<num; i++){
     
  if (num % i ==0){
    result+=i;//suma dzielników liczby
    
}
}
if (result==num){//jeśli suma dzielników = liczba to mamy liczbę doskonałą
        wynik=result;
    }
  return wynik; 
}
