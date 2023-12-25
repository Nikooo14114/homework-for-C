#include<stdio.h>
#include<math.h>
//calculate the angle between the lines connecting two points to the origin
int main()
{
    printf("Please input the coordinates of two points:\n");
    float x1,y1,x2,y2;
    scanf("%f,%f,%f,%f",&x1,&y1,&x2,&y2);
    if(x1==0&&y1==0||x2==0&&y2==0)
    printf("Error");
    else
    {
        float d1,d2,d3;
        d1=x1*x1+y1*y1;
        d2=x2*x2+y2*y2;
        d3=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        float cos1=((d1+d2-d3)/(2*sqrt(d1*d2)));
        float angle=acos(cos1)*180/3.1415926;
        printf("%f",angle);
    }
    return 0;
}