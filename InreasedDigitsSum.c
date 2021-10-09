#include<stdio.h>
int main()
{
    int a=111,m,sum=0;
    while(a>0)
    {
        m=a%10;
        sum=sum+m+1;
        a=a/10;
    }
    printf("Sum of digits: %d ",sum);
    return 0;
}
