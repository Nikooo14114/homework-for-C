//finding the numbers which are between 1 and 1000 are "perfect number"
//And their factors

#include<stdio.h>

int main()
{
    for(int i=1;i<=1000;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
        { 
            if(i%j==0)
            {
                sum+=j;  
            } 
        }
        if(sum==i)
        {
            printf("%d,its factors are ",sum);
            for(int j=1;j<i;j++)
            { 
                if(i%j==0)
                {
                    printf("%d ",j);  
                } 
            }
            printf("\n");
        }
        
    }
    return 0;
}