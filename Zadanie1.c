/*napisz program, który wypisuje na ekran 'Hello world'
zmodyfikuj program tak żeby pytał o wiek
po podaniu wieku program ma wypisywać: 'masz XX lat'/'you are XX'*/



#include <stdio.h>

int main(void) {
    printf("Hello World\n");
    printf("ile masz lat?\n");

  int wiek,age; //deklaracja zmiennej int
  scanf("%d", &wiek);//wpisana zmienna jest int, ma nazwe wiek

    printf("Masz %d lat/you are %d ",wiek,wiek);
  return 0;
}
