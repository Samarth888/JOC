#include<stdio.h>
int main()
{
    int arr1[20] = { 560, 660, 590, 760, 480, 960},name,avg1,sum1=0;
    float arr2[20]= {97.50, 66.0, 79.25, 76.55, 98.45, 96.40},avg2,sum2=0;
    printf("Enter your choice, 1 for Mr.Int, 2 for Mr.Float: ");
    scanf("%d",&name);
    switch(name)
    {
        case 1:
        for (int i=0;i<6;i++)
        {
            sum1=sum1+arr1[i];
        }
        avg1=sum1/6;
        printf("Your total weekly salary is: Rs. %d\n",sum1);
        printf("Your average salary is: Rs. %d",avg1);
        break;
        case 2:
        for (int i=0;i<6;i++)
        {
            sum2=sum2+arr2[i];
        }
        avg2=sum2/6;
        printf("Your total weekly salary is: Rs. %f\n",sum2);
        printf("Your average salary is: Rs. %f",avg2);
        break;
    }
    return 0;

}