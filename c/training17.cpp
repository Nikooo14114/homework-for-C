//Long division method to find 600 decimal places after the result

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("please input two prime numbers:\"");
    scanf("%d %d",&a,&b);
    printf("the result is:\n%d.",a/b);
    int i,j;
    c=a%b;
    for(i=0;i<900;i++)
    {
        c=c*10;
        printf("%d",c/b);
        c=c%b;
    }
    return 0;
}