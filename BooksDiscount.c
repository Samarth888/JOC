#include <stdio.h>

int main() {
    int b,amt;
    scanf("%d",&b);
    amt=(b*10);
    if(b<10000) {
        printf("No discount\n");
        amt+=0;
    }
    else if(b>10000 && b<15000) {
        printf("You got 10%% discount\n");
        amt-=amt*0.1;
    }
    else if(b>15000 && b<20000) {
        printf("You got 20%% discount");
        amt-=amt*0.2;
    }
    printf("The total cost=%d",amt);
    return 0;
}
