#include<stdio.h>

int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int i=96;
    for(int j=2;j<i;j++)
    {
        if(is_prime(j))
        {
            for(int m=2;m<i;m++)
            {
                if(is_prime(m)&&m+j==i&&m>j)
                printf("%d=%d+%d\n",i,j,m);
            }
        }
    }
}