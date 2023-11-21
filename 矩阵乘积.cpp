#include<stdio.h>

int main()
{
    int a[3][4]={{0,1,2,3},{1,2,3,4},{2,3,4,5}};
    int b[4][3]={{0,0,0},{0,1,2},{0,2,4},{0,3,6}};
    int c[3][3]={0};
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}