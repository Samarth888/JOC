#include<stdio.h>
int main()
{
    int code,n,m=1,pin=0;
    printf("Enter the codeword: ");
    scanf("%d",&code);
    while(code>0)
    {
        n=code%10;
        code=code/10;
        if(n==9)
        {
            pin=pin+0;
        }
        else 
        {
            pin=pin+(n+1)*m;
        }
        m=m*10;
    }
    printf("The PIN is: %d",pin);
    return 0;
}