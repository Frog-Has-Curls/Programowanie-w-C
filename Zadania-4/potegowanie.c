/*Napisz rekurencyjnie funkcję obliczającą n-tą potęgę liczby x*/


#include  <stdio.h>

int pot(int x, int n)
{
    if (n ==0){
      return 1;
    }
    else {
      x = x * pot(x, n-1);

    }
    return x;
    
}
    
int main(void)
{
    int p;
    p = pot(3,2);
    printf("%d \n", p);
}