//Number of daffodils

#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	for (a=100;a<=999;a++)
	{
		if((pow(a/100,3)+pow(((a%100)/10),3)+pow((a%10),3))!=a)
		continue;
		printf("%d\n",a); 
	}
	printf("\n");
	return 0;
}
