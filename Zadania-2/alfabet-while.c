/*Napisz program, który wypisuje wszystkie litery angielskiego alfabetu od 'a' do 'z'.
Napisz 2 programy - jeden z pętlą while, drugi for*/

#include<stdio.h>
int main(void){

char alp='a';
while(alp <= 'z'){

  printf("%c \n",alp);
  alp++;
  }
return 0;
}
