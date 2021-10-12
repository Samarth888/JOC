#include<stdio.h>
int main()
{
    int arr[50]={2, 6, 10, 14, 18, 10, 3, 7};
    int x, pos, n=8;
    printf("Given array is: ");
    for (int i=0; i < n; i++)
    { 
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0; i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("Twins exist in this array!");
                goto end;
            }

        }
    }
    end:  
    return 0;
}