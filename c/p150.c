#include<stdio.h>

int main()
{
    int a[3][4];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int i,j,max;
    max= a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    printf("max=%d\n",max);
    return 0;
}
    