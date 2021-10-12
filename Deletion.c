#include<stdio.h>
int main()
{
    int arr[50]={2, 6, 10, 14, 18, 3, 7, 11, 15, 19};
    int x, pos, n=10;
    printf("Given array is: ");
    for (int i=0; i < n; i++)
    { 
        printf("%d ",arr[i]);
    }
    printf("\n");
    x=3;
    pos=6;
    n--;
    for(int i=pos-1;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Final array is: ");
    for (int i=0; i < n; i++)
    { 
        printf("%d ",arr[i]);
    }
    return 0;
}