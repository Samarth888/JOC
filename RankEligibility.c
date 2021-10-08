// Checks branch eligibility with any 3: If statement, Ternary op or switch case

#include <stdio.h>

int main()
{
    int rank,op,x,y,z;
    printf("Enter your rank: ");
    scanf("%d",&rank);
    printf("Enter the method of finding eligibility (From 1-3): 1-If statement, 2-Ternary operator, 3-Switch case: ");
    scanf("%d",&op);
    if (op==1)
    {
        if(rank<3250){
            printf("All branches");
        }
        else if(rank>3250 && rank<6505){
            printf("ISE,EC,MEC");
        }
        else if(rank>6505 && rank<12012){
            printf("EC,MEC");
        }
        else if(rank>12012 && rank<22340){
            printf("MEC");
        }
        else {
            printf("Try another college! :(");
        }
    }
    
    else if(op==2){
        (rank<3250)? printf("all branches"):((rank>3250 && rank<6505)? printf("ISE,EC,MEC"):((rank>6505 && rank<12012)? printf("EC,MEC"):(rank>12012 && rank<22340)? printf("MEC"):printf("Try other colleges")));
    }
    
    else {
        if (rank<3250){
            x=1;
        }
        else if(rank>3250 && rank<6505){
            x=2;
        }
        else if(rank>6505 && rank<12012){
            x=3;
        }
        else if(rank>12012 && rank<22340){
            x=4;
        }
        else {
            x=5;
        }
        
        switch (x)
        {
            case 1:
                printf("All branches");
                break;
            case 2:
                printf("ISE,EC,MEC");
                break;
            case 3:
                printf("EC,MEC");
                break;
            case 4:
                printf("MEC");
                break;
            case 5:
                printf("Try another college! :(");
                break;
            
        }
    }
    
    return 0;

}
