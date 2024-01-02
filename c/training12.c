//finding reversible prime numbers(1000~10000)

#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int n,i;
    for(i=1000;i<10000;i++)
    {
        if(is_prime(i))
        {
            n=i%10*1000+i/10%10*100+i/100%10*10+i/1000;
            if(is_prime(n)&&n>i)
            printf("%d\n",i);
        }
    }
}