#include<stdio.h>
int main()
{
	float x,y;
	printf("please input x:");
	scanf("%f",&x);
	if(x<1)
	    y=x;
	else if(x>=1&&x<10)
	    y=2*x-1;
	else
	    y=3*x-11;
	printf("y is %f",y);
	return 0;
}
