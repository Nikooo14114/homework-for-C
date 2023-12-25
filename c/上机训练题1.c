#include<stdio.h>
int main()
{
	int a;
	printf("输入正整数");
	scanf("%d",&a);
	while(a!=1)
	{
	if(a%2==0)
	a=a/2;
	else
	a=3*a+1;
	}
	printf("the result is %d\n",a);
	return 0;
}

