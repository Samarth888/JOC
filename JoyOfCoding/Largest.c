#include <stdio.h>

int main() {

    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if(a<0 || b<0 || c<0) printf("invalid input\n");
    else{
    x=(a>b) ? (a>c ? a:c):(b>c ? b:c);
    printf("largest = %d",x);
    }
    return 0;
}
