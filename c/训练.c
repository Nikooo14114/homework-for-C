#include <stdio.h>
int f(int x)
{
    x = x + 1;
    printf("A=%d\n", x);
    if(x < 5)
    {
        f(x);
    }
    else
    {
        printf("B=%d\n", x);
    }
}
int main()
{
    int a=f(1);
    return 0;
}