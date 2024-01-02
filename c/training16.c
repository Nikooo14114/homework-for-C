#include<stdio.h>

int main()
{
    printf("please input a number:\"");
    int n;
    scanf("%d",&n);
    if(n/10000!=0)
    printf("5digits\n");
    else if(n/1000!=0)
    printf("4digits\n");
    else if(n/100!=0)
    printf("3digits\n");
    else if(n/10!=0)
    printf("2digits\n");
    else
    printf("1digit\n");
    int m=n%10+n/10%10+n/100%10+n/1000%10+n/10000;
    printf("sum of digits:%d\n",m);
    return 0;
}