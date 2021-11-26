#include<stdio.h>
#include<conio.h>

void patmatch(char str[100], char pat[100])
{
    int i,k,c,flag,m;
    i=c=m=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            k=c;
            i++;
            m++;
            if(pat[i]=='\0')
            {
                printf("Pat is at loc %d",k-1);
                i=0;
                c=m;
                flag=1;
            }
        }
        c++;
        m=c;
    }
    if(flag!=1)
    {
        printf("No pattern found");
    }
}
void main()
{
    char str[100],pat[100];
	printf("enter the string: ");
    gets(str);
    printf(" \n enter the patter string: ");
    gets(pat);
	patmatch(str,pat);
}
