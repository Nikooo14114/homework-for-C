#include<stdio.h>

int main()
{
    int i,a=100,b;
    for(a;a<=200;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                break;
            }

        }
        if(i==a)
        {
            printf("%d\n",a);
        }
    }
}