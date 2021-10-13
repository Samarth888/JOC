#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[100],*ptr,i,l;
    printf("Enter any string\n");
    gets(str);
    l=strlen(str);
    ptr=str;
    for(i=1;i<l;i++)
    {
        if(*(ptr+i-1)==' ')
        count++;
    }
    printf("It contains %d words",count+1);
}