
    /*
    Napisz program, który wylicza BMI

program pyta użytkownika o wzrost i wagę
wypisuje BMI z dokładnością do części dziesiętnej
https://pl.wikipedia.org/wiki/Wska%C5%BAnik_masy_cia%C5%82a
    
    
    */
#include <stdio.h>
#include <math.h>

int main(void) {
  float waga,wzrost,y,x;
    
  
  printf("ile wynosi masa twojego ciała w kg?\n");
    scanf("%f",&waga);
   
  printf("ile wynosi twój wzrost w m?\n");
    scanf("%f",&wzrost);

    y=pow(wzrost,2);
    x=waga/y;


    printf("Twoje BMI wynosi %.1f ",x);
  return 0;
}
