#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("ѡ��1-5�״�Ǯ����: ");
    scanf("%d", &a);
	double p0=1000.0,p1,q;
	if(a==1)
	{
    	q=p0*(1+0.03*5);
    	printf("��Ϣ��Ϊ��%f\n",&q);
	}
    else if (a==2)
    {
    	p1=p0*(1+3*0.0275);
    	q=p1*(1+2*0.0211);
    	printf("��Ϣ��Ϊ��%f\n",q);
    }
	else if(a==3)
	{
    	p1=p0*(1+2*0.0211);
    	q=p1*(1+3*0.0275);
	    printf("��Ϣ��Ϊ��%f\n",q);
	}
	else if(a==4)
	{
    	q=p0*pow(1+0.015,5);
    	printf("��Ϣ��Ϊ��%f\n",q);
	}
	else if(a==5)
	{
	    q=p0*pow(1+0.0035,20);
     	printf("��Ϣ��Ϊ��%f\n",q);
	}
	else 
	{
	    printf("��ѡ����ȷ�ķ���");
	}
	return 0;
} 
