#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("选择1-5套存钱方案: ");
    scanf("%d", &a);
	double p0=1000.0,p1,q;
	if(a==1)
	{
    	q=p0*(1+0.03*5);
    	printf("本息和为：%f\n",&q);
	}
    else if (a==2)
    {
    	p1=p0*(1+3*0.0275);
    	q=p1*(1+2*0.0211);
    	printf("本息和为：%f\n",q);
    }
	else if(a==3)
	{
    	p1=p0*(1+2*0.0211);
    	q=p1*(1+3*0.0275);
	    printf("本息和为：%f\n",q);
	}
	else if(a==4)
	{
    	q=p0*pow(1+0.015,5);
    	printf("本息和为：%f\n",q);
	}
	else if(a==5)
	{
	    q=p0*pow(1+0.0035,20);
     	printf("本息和为：%f\n",q);
	}
	else 
	{
	    printf("请选择正确的方案");
	}
	return 0;
} 
