#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,r1,x2,y2,r2,m,s;
	float q,w,e,r,t,u,s1,s2,s3,s4;
	printf("�ֱ���������Բ��Բ������Ͱ뾶");
	scanf("%f,%f,%f,%f,%f,%f",&x1,&y1,&r1,&x2,&y2,&r2);
    m=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(r1>=r2) 
    {
        if(m>=r1+r2)
        printf("�غ����Ϊ0");
        else if(m<=r1-r2)
        s=3.14*r2*r2;
        printf("�غ����Ϊ%f\n",s);
        else
        {
            q=(m/2)/r1;
            w=2*q*q-1;    //cos2x��ֵ 
            e=acos(w);    //���� 
            s1=3.14*r1*w;   //���ε����
            s2=0.5*sin(e)*r1*r1;    //�����ε����
	        r=(m/2)/r2;
	        t=2*r*r-1
         	u=acos(t)
	        s3=3.14*r2*u;
        	s4=0.5*sin(u)*r2*r2;
        	s=s1+s3-s2-s4;     //�غ���� 
        	printf("�غ����Ϊ%f\n",s);
        }
    }
    if(r1<r2)
    {
    	if(m>=r1+r2)
        printf("�غ����Ϊ0");
        else if(m<=r1-r2)
        s=3.14*r1*r1;
        printf("�غ����Ϊ%f\n",s)
        else
        {
            q=(m/2)/r1;
            w=2*q*q-1;    //cos2x��ֵ 
            e=acos(w);    //���� 
            s1=3.14*r1*w;   //���ε����
            s2=0.5*sin(e)*r1*r1;    //�����ε����
	        r=(m/2)/r2;
	        t=2*r*r-1
         	u=acos(t)
	        s3=3.14*r2*u;
        	s4=0.5*sin(u)*r2*r2;
        	s=s1+s3-s2-s4;     //�غ���� 
        	printf("�غ����Ϊ%f\n",s);
        }
    }
    return 0;
}
//������ˣ�����ˣ���Ӧ����ƽ�֣�Ӧ�������Ҷ��� 
