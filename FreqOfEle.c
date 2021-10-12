#include<stdio.h>
int main()
{
    int arr[]={2, 6, 10, 14, 18, 10, 3, 7, 11, 15, 19, 3, 7, 10, 14};
    int length = 15;  
    int fr[15];    
    int visited = -1;    
        
    for(int i = 0; i < length; i++)
    {    
        int count = 1;    
        for(int j = i+1; j < length; j++)
        {    
            if(arr[i] == arr[j])
            {    
                count++;        
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
           
    for(int i = 0; i < length; i++)
    {    
        if(fr[i] != visited)
        {    
            printf("    %d ---", arr[i]);        
            printf("  %d\n", fr[i]);    
        }    
    }       
    return 0;
}
