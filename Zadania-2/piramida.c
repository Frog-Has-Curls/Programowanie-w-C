/*
Napisz program, który rysuje piramidę z haszy '#'. Jedynym parametrem który podajesz jest jej wysokość.
edit: ponieważ co osoba to robi jakieś krzywe - mniej więcej tak ma wyglądać:
----M-----
--MMM--
MMMMM
Oczywiście spacje, a nie pauzy.
*/

#include<stdio.h>
int main(void){

int wysokosc,i,y=0,spc;

printf("podaj wysokosci piramidy\n");
scanf("%d", &wysokosc);

  for(i=1; i<=wysokosc; i++, y=0){ 
    for (spc=1; spc<=wysokosc-i; spc++){
      printf(" ");
    } 
        while (y != 2 * i -1) {
         printf("*");
         ++y;
  
}
 
    for (spc=1; spc<=wysokosc-i; spc++){
      printf(" ");
    } 
printf("\n");
  }
return 0;
}
