#include<stdio.h>
#include<string.h>

int main()
{
    int a[10][10]={1};
    int i,j;
    for(i=0;i<10;i++)
    {
        a[i][0] = a[i][i] = 1;
        for(j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
