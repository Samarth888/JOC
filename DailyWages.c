#include<stdio.h>
int main()
{
    int arr1[20] = { 560, 660, 590, 760, 480, 960},name;
    float arr2[20]= {97.50, 66.0, 79.25, 76.55, 98.45, 96.40};
    char arr3[][1]={ "M", "T", "W", "T", "F", "S"};
    printf("Enter your choice, 1 for Mr.Int, 2 for Mr.Float, 3 for Mr.Char: ");
    scanf("%d",&name);
    switch(name)
    {
        case 1:
        printf("Your daily wages are:\n");
        for (int i=0;i<6;i++)
        {
            printf("Rs. %d\n",arr1[i]);
        }
        break;
        case 2:
        printf("Your daily wages are:\n");
        for (int i=0;i<6;i++)
        {
            printf("Rs. %f\n",arr2[i]);
        }
        break;
        case 3:
        printf("The weekdays are:\n");
        for (int i=0;i<6;i++)
        {
            printf("%c\n",arr3[i][0]);
        }
        break;
    }
    return 0;

}