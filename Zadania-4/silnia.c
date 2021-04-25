/*Napisz rekurencyjnie program obliczający n! (n silnia):
https://en.wikipedia.org/wiki/Factorial
Uwaga! Silnia bardzo szybko rośnie, więc nie zalecane jest testowanie kodu dla dużych wartości n - skończy się restartem komputera.*/


#include  <stdio.h>

int sil(int x)
{
    if (x ==0){
      return 1;
    }
    else {
      x = x * sil(x-1);

    }
    return x;
    
}
    
int main(void)
{
    int p;
    p = sil(4);
    printf("%d\n", p);
}