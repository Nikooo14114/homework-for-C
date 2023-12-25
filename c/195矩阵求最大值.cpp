#include<stdio.h>

int max_value(int a[][4])
{
    int i,j,max;
    max = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int a[3][4]={{1,5,6,84,},{2,4,-6,20},{3,5,7,10}};
    printf("the max value is %d\n",max_value(a));
    return 0;
}
