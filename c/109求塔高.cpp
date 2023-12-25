#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,m;
	printf("(x,y)\n");
	scanf("%f,%f",&x,&y);
	if(x>=0&&y>=0)
	{
		m=sqrt(pow(x-2,2)+pow(y-2,2));
		if(m>1)
		printf("the height is 0m\n");
		else
		printf("the height is 10m\n");	
	}
	else if(x>=0&&y<0)
	{
		m=sqrt(pow(x-2,2)+pow(y+2,2));
		if(m>1)
		printf("the height is 0m\n");
		else
		printf("the height is 10m\n");
	}
	else if(x<=0&&y>=0)
	{
		m=sqrt(pow(x+2,2)+pow(y-2,2));
		if(m>1)
		printf("the height is 0m\n");
		else
		printf("the height is 10m\n");
	}
	else
	{
		m=sqrt(pow(x+2,2)+pow(y+2,2));
		if(m>1)
		printf("the height is 0m\n");
		else
		printf("the height is 10m\n");
	}
	return 0;
}
