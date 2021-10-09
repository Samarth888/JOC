#include<stdio.h>
int main()
{
    int a=75389,m,n,sum=0,sinsum=0,x;
    while(a>0)
    {
        m=a%10;
        sum=sum+m;
        a=a/10;
    }
    x=sum;
    while(x>0)
    {
        n=x%10;
        printf("%d ",n);
        sinsum=sinsum+n;
        x=x/10;
    }
    printf("Sum of digits: %d ",sum);
    printf("Single digit sum: %d",sinsum);

    return 0;        
}