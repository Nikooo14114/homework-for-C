#include<stdio.h>

int main()
{
    double h = 100, sum = h;
    for(int i = 0; i < 9; i++)
    {
        h /= 2;
        sum += h * 2;
    }
    sum = sum + h;
    printf("%lf\n", sum);
    printf("%lf\n", h);
    return 0;
}
