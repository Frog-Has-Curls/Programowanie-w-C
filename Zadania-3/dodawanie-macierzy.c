/*Dane są w funkcji main dwie kwadratowe tablice o znanych i identycznych wymiarach. Napisz program, który dodaje te tablice. Program wypisuje zarówno tablice wyjściowe, jak i wynik. Np.
Tab 1:
1 3
2 5
Tab 2:
5 3
1 6
Suma:
6 6
3 11
Oczywiście inputem są tutaj dwie dwuwymiarowe tablice tab1[2][2] i tab2[2][2], a w ogólnym przypaku [n][n]
*/


#include <stdio.h>
int add(int n, int arr1[n][n],int arr2[n][n]){
int i,y,sum[n][n];

for (i = 0; i < n; ++i)
    for (y = 0; y < n; ++y) {
      sum[i][y] = arr1[i][y] + arr2[i][y];
    }

  for (i = 0; i < n; ++i)
    for (y = 0; y < n; ++y) {
      printf("%d ", sum[i][y]);
      if (y == n - 1) {
        printf("\n");
      }
    }

  return 0;
}


int main(void){
  int wynik;
  int array1[2][2]={{1,3},{2,5}};
  int array2[2][2]={{5,3},{1,6}};

wynik=add(2,array1,array2);

  return 0;
}
