#include<stdio.h>
#include<math.h>

int stu(int a,int b)
{
    int sum;
    sum=pow(a,3)+pow(b,3);
    return(sum);
}

int main()
{
    int a,b;
    printf("input two numbers\n");
    scanf("%d,%d",&a,&b);
    printf("%d",stu(a,b));
    return 0;
}