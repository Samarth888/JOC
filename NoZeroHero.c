#include<stdio.h>
int main()
{
    int a=1000,n,m,count=0;
    m=a;
    while(a>0)
    {
        n=a%10;
        if (n)
            printf("%d ",n);
        a=a/10;
    }
    return 0;
}