/*
Napisz program, który rysuje piramidę z haszy '#'. Jedynym parametrem który podajesz jest jej wysokość.
edit: ponieważ co osoba to robi jakieś krzywe - mniej więcej tak ma wyglądać:
----M-----
--MMM--
MMMMM
Oczywiście spacje, a nie pauzy.
*/
#include<stdio.h>

int rzad(int wys,int j){
int spc,y=0;

for (spc=1; spc<=wys-j; spc++){
      printf(" ");
    } 
        while (y != 2 * j-1 ) {    
         printf("*");
         ++y;
}
    for (spc=1; spc<=wys-j; spc++){
      printf(" ");
    } 
return 0;
}


int main(void){

int wysokosc,i;
printf("podaj wysokosci piramidy\n");
scanf("%d", &wysokosc);

  for(i=1; i<=wysokosc; i++){ 
    rzad(wysokosc,i);
    printf("\n");
  }
return 0;
}
