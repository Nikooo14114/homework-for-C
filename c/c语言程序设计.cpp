//管道内已知管道横截面半径，管道长度，管内液体液面长度，求管内液体体积

#include<stdio.h>
#include<math.h>
#define PI M_PI

int main()
{
    printf("please input the radius and the length of the pipe and the length of the liquid\n");
    //输入管道半径，管道长度，管内液体液面长度
    printf("the unit of them is m\n");         //单位是米 
    printf("whether the liquid is over the half of the pipe?(1or0)\n");
    float r,l,d,v;
    double theta,s,s1;  
    int c;            
    scanf("%f,%f,%f,%d",&r,&l,&d,&c);
    if(r<=0||l<=0||d<0||d>2*r)
    {
        printf("please check your input\n");   //判断输入是否合法
    }
    else
    {
    theta=asin(d/(2*r));                       //计算液体液面对应的圆心角的一半
    s=theta*r*r;                             //计算液体液面对应的圆弧面积
    s1=r*r*sin(theta)*cos(theta);              //计算液体液面对应的三角形面积，利用二倍角公式
    if (c==1)                                  //判断液体是否超过管道的一半
    {
        v=l*(PI*r*r+s-s1);             //计算液体体积
    }
    else
    {
        v=l*(s-s1);                   
    }
    printf("the lolume of the liquid is %f m^3\n",v);   //输出液体体积
    }
return 0;
}
