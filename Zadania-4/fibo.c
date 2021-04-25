/*C. Fib. to seria takich liczb, że każda kolejna jest sumą dwóch poprzednich:
https://pl.wikipedia.org/wiki/Ci%C4%85g_Fibonacciego
Napisz program rekurencyjnie obliczający n-ty element ciągu.*/


#include  <stdio.h>

int fib(int x)
{
    if (x ==0){
      return 0;}

    if (x ==1){
      return 1;  
    }
    else {
      x = fib(x-1)+fib(x-2);

    }
    return x;
    
}
    
int main(void)
{
    int p;
    p = fib(15);
    printf("%d\n", p);
}