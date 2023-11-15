#include<stdio.h>   
#include<math.h>
int main()
{
    double T1=793.7,T2=296.1,Weight1=2223.3,Weight2=3582.8,c=1000.0;
    double T11=793.7,T22,Q1,Q2,W;
    while(fabs(T22-T11)>0.001)
    {
        T11=T11-0.0005;
        Q1=c*(Weight1)*(T1-T11);
        T22=(c*Weight2*T2)/(c*Weight2-Q1/T11);
    }
    printf("T11=%7.1fK\n",T11);
    W=(Q1*(1-T2/T1))/1e6;
    printf("W=%7.1fMJ\n",W);
    return 0;
}

