//2. Find length of string using pointers (hint: '\0').
#include <stdio.h>

int main(void)
{char s[100]="some string\n";
char *p;
int count=0;
p=s;
printf("%s",p);

while(p[count]!= '\0'){
  count++;
}

printf("dlugosc= %d\n", count);
  return 0;

}