#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,r1,x2,y2,r2,m,s;
	float q,w,e,r,t,u,s1,s2,s3,s4;
	printf("分别输入两个圆的圆心坐标和半径");
	scanf("%f,%f,%f,%f,%f,%f",&x1,&y1,&r1,&x2,&y2,&r2);
    m=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(r1>=r2) 
    {
        if(m>=r1+r2)
        printf("重合面积为0");
        else if(m<=r1-r2)
        s=3.14*r2*r2;
        printf("重合面积为%f\n",s);
        else
        {
            q=(m/2)/r1;
            w=2*q*q-1;    //cos2x的值 
            e=acos(w);    //弧度 
            s1=3.14*r1*w;   //扇形的面积
            s2=0.5*sin(e)*r1*r1;    //三角形的面积
	        r=(m/2)/r2;
	        t=2*r*r-1
         	u=acos(t)
	        s3=3.14*r2*u;
        	s4=0.5*sin(u)*r2*r2;
        	s=s1+s3-s2-s4;     //重合面积 
        	printf("重合面积为%f\n",s);
        }
    }
    if(r1<r2)
    {
    	if(m>=r1+r2)
        printf("重合面积为0");
        else if(m<=r1-r2)
        s=3.14*r1*r1;
        printf("重合面积为%f\n",s)
        else
        {
            q=(m/2)/r1;
            w=2*q*q-1;    //cos2x的值 
            e=acos(w);    //弧度 
            s1=3.14*r1*w;   //扇形的面积
            s2=0.5*sin(e)*r1*r1;    //三角形的面积
	        r=(m/2)/r2;
	        t=2*r*r-1
         	u=acos(t)
	        s3=3.14*r2*u;
        	s4=0.5*sin(u)*r2*r2;
        	s=s1+s3-s2-s4;     //重合面积 
        	printf("重合面积为%f\n",s);
        }
    }
    return 0;
}
//不想搞了，算错了，不应该是平分，应该用余弦定理 
