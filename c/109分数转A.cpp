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
	printf("You got a C,珊佩杏");
	else if(marks>=80&&marks<90) 
	printf("B,すごいですね");
	else
	printf("A!!!!,猟爆佛和群");
	return 0;
}
