
//Joy of coding Day 3
//Samarth S Bharadwaj USN 1RN20CS125

#include<stdio.h>
int main()
{
    int a=45678,n,m,count=0,reverse=0,rem;
    m=a;
    while(a>0)
    {
        n=a%10;
        printf("%d ",n);
        a=a/10;
        count++;
    }
    printf("Number of digits: %d ",count);
    while(m!=0)    
    {    
     rem=m%10;    
     reverse=reverse*10+rem;    
     m/=10;    
    }    
  printf("Reversed Number: %d",reverse);    
    return 0;        
}