#include<stdio.h>
int main()
{
	float marks;
	printf("please input your marks: ");
	scanf("%f",&marks);
	if(marks<60)
	printf(" What the hell?You got E!!!,you are a sb");
	else if(marks>=60&&marks<70)
	printf("Are you serius?,you got a D! ");
	else if(marks>=70&&marks<80)
	printf("You got a C,���а�");
	else if(marks>=80&&marks<90) 
	printf("B,�������Ǥ���");
	else
	printf("A!!!!,�������·�");
	return 0;
}
