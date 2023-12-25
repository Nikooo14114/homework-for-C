//transform a nubmer to binary
//we use the method of dividing by 2 and noting the remainders

#include<stdio.h>

int main()
{
    int num;
    printf("please input a number(0-65535)");
    scanf("%d",&num);
    int a[16],b[16];
    for(int i=0;i<16;i++)
    {
        a[i]=num%2;
        num/=2;
    }
    for(int i=0;i<16;i++)
    {
        b[i]=a[15-i];
        printf("%d",b[i]);
    }
    return 0;
}