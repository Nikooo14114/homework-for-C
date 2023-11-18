#include<stdio.h>
int main()
{
    int a=1,b=2,i;
    double c,sum;
    for(i=1;i<=20;i++)
        {
            c=b/a;
            sum=sum+c;
            a=b;
            b=a+b;
        }
    printf("%.2lf\n",sum);
    return 0;
}
