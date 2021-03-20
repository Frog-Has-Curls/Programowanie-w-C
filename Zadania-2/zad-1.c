
/*

Program ma wykonywać dzielenie dwóch liczb całkowitych podanych przez użytkownika. Jako wynik program ma zwracać:

co było dzielone przez co
jaki jest wynik dzielenia z dokładnością do 2 miejsc po przecinku
jaki jest wynik dzielenia zaokrąglony do wartości całkowitej
jaki jest wynik dzielenia całkowitego i jego reszta
*/

#include <stdio.h>
#include <math.h>

int main(void){

  float liczba1, liczba2, wynik, reszta;
  
  
printf("Podaj dwie liczby całkowite oddzielone przecinkiem\n");
scanf("%f, %f", &liczba1, &liczba2);
wynik = liczba1/liczba2;

reszta= fmod(liczba1,liczba2);


printf("%.f divided by %.f equals:\n", liczba1, liczba2);
printf("Rounded to 0.01: %.2f \n", wynik);
printf("Rounded to integer: %.f\n", round(wynik));
printf("Integer division: %.f, reminder: %.lf", wynik, reszta);




}
