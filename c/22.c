#include<stdio.h>

int main()
{
    int a=1,b=2,c=4;
    if(c=a+b)
        if(c==4)
        a=b=c=20;
        else if(c==3)
        a=b=c=30;
        else
        a=b=c=40;
        printf("%d %d %d\n",a,b,c);
}
