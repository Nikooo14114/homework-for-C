#include<stdio.h>

int main()
{
    float average(float a[]);
    float score[10],aver;
    int i;
    printf("please input 10 scores:\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
    printf("\n");
    aver=average(score);
    printf("the average score is %5.2f\n",aver);
    return 0;

}

float average(float a[])
{
    float sum=0,aver;
    int i;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    aver=sum/10;
    return aver;
}