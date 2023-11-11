#include<stdio.h>
int main()
{
    int a,b; //定义两个整数变量
    printf("Please input two integers:\n"); //提示用户输入两个整数
    scanf("%d%d",&a,&b); //从键盘读取两个整数
    printf("sum is %d\n",a+b); //计算并输出它们的和
    return 0;
}
