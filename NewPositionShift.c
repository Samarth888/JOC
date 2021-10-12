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
    //Element to be inserted is 22 at position 5
    x=22;
    pos=5;
    n++;
    for (int i=n-1; i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    printf("Final array is: ");
    for (int i=0; i < n; i++)
    { 
        printf("%d ",arr[i]);
    }

    return 0;
}