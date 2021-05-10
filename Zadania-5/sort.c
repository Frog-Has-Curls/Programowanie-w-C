/*5. Sort an array using pointers (void sort(int * arr, int size, int (* compare)(int *, int *))).*/
#include <stdio.h>

void swap(int *n, int *m){
  int temp;
  temp=*n;
  *n=*m;
  *m=temp;
}
void printArray(int * arr, int size)
{
  int i, *poi= arr;
  for(i=0; i<=size-1; i++){
    printf("%d ", poi[i]);
  }

}
int diff(int * n, int * m)
{
    return (*n) - (*m);
}

void sort(int * arr, int size, int (* compare)(int *, int *));

int main()
{
    int arr[]={4,2,1,5,3};
    int size =5;

    printf("Elements before sorting: ");
    printArray(arr, size);

    printf("\nSorted: ");
    sort(arr, size, diff);
    printArray(arr, size);

    return 0;
}

void sort(int *arr, int size, int (* compare)(int *, int *))
{
  int i, *poi= arr;
    int  y;
    for(i=0; i<= size-1; i++)
    {
      
        for(y=i; y <= size-1; y++)
        {
            if(compare(&poi[i], &poi[y]) > 0)
            {
              swap(&poi[i], &poi[y]);
            }
        }

    }
}