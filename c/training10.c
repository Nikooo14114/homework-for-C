//Verify whether 96 conforms to Goldbach's conjecture

#include <stdio.h>

int main()
{
    int i=96;
    for(int j=2;j<i;j++)
    {
        int k;
        for(k=2;k<j;k++)
        {
            if(j%k==0)
            break;
        }
        if(k==j)
        {
            for(int m=2;m<i;m++)
            {
                int n;
                for(n=2;n<m;n++)
                {
                    if(m%n==0)
                    break;
                }
                if(n==m&&m+j==i&&m>j)
                printf("%d=%d+%d\n",n,j,m);
            }
        }
    }
}