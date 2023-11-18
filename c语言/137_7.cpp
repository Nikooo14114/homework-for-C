#include<stdio.h>
int main()
{
    int a=1,b=1;
    double c=1.0,sum1=0,sum2=0,sum3=0,sum;
    for(a;a<=100;a++)
        sum1=sum1+a;
    for(b;b<=50;b++)
        sum2=sum2+b*b;
    for(c;c<=10;c++)
        sum3=sum3+1/c;
    sum=sum1+sum2+sum3;
    printf("sum=%f\n",sum);
    return 0; 
}

