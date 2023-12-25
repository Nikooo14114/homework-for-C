#include<stdio.h>
//定义一个求最大值函数，接收三个整数参数，返回它们中的最大者
int max(int x, int y, int z)
{
    int m; //定义一个局部变量m
    m = x; //假设x是最大的数
    if (y > m) m = y; //如果y大于m，更新m为y
    if (z > m) m = z; //如果z大于m，更新m为z
    return m; //返回m的值
}
int main()
{
    int a, b, c, d; //定义四个整数变量
    printf("请输入三个数：\n"); //提示用户输入三个数
    scanf("%d%d%d", &a, &b, &c); //从键盘读取三个数
    d = max(a, b, c); //调用max函数，并将返回值赋值给d
    printf("最大值是：%d\n", d); //输出最大值
    return 0;
}