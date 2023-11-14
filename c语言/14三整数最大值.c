#include<stdio.h>
int main()
{
	int max(int x,int y,int z);
	int x,y,z,m;
	scanf("%d,%d,%d",&x,&y,&z);
	m=max(x,y,z);
	printf("max=%d\n",m);
	return 0;
}
int max(int x,int y,int z)
{
	int d;
	if(x>=y) d=x;
	else d=y;
	if(z>=d) return(z);
	else return(d);
}