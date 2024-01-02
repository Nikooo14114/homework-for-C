#include<stdio.h>

int main()
{
    float a=1.0,b=1.0;
    float sum=0.0;
    for(b;b<=100;b++)
    {
        sum+=a/b;
        a=-a;
    }
    printf("sum=%f\n",sum);
    return 0;
}