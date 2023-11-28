#include <stdio.h>

int main() {
    int num1, num2;
    printf("请输入两个质数：");
    scanf("%d %d", &num1, &num2);

    double result = (double)num1 / num2;
    printf("相除后的小数值为：%.200lf\n", result);

    return 0;
}
