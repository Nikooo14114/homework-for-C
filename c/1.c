#include<stdio.h>

int main()
{
    int a, b;
    printf("please input two prime numbers:");
    scanf("%d %d", &a, &b);
    printf("%d.", a / b);  // 打印整数部分和小数点
    a %= b;  // 计算余数
    for(int i = 0; i < 200; i++)
    {
        a *= 10;  // 将余数扩大10倍
        printf("%d", a / b);  // 打印当前位的数字
        a %= b;  // 计算新的余数
    }
    printf("\n");
    return 0;
}