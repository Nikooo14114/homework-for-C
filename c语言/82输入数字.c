#include<stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("%d\n%d\n%f\n%e\n%c%c",a,b,x,y,c1,c2); 
	return 0;
}
