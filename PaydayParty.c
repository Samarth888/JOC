#include<stdio.h>
int main()
{
    int arr1[20] = { 560, 660, 590, 760, 480, 960},i,j;
    float arr2[20]= {97.50, 66.0, 79.25, 76.55, 98.45, 96.40};
    for (i=1;i<6;i++)
    {
        if (arr1[0] < arr1[i]) {
            arr1[0] = arr1[i];
        }
    }
    for (j=1;j<6;j++)
    {
        if (arr2[0] < arr2[j]) {
            arr2[0] = arr2[j];
        }
    }
    printf("Mr.Int highest pay is %d\n",arr1[0]);
    printf("Mr.Float's highest pay is %f",arr2[0]);
    return 0;
}