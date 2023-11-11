#include <stdio.h>
#include<math.h> 
int main()
{	int n,i;
	printf("please enter a integer number,n=");
	scanf("%d",&n);
	if (n <= 1) 
	{
        printf("%d is not a prime number.\n", n);
        return 0;
	}
	for (i=2;i<pow(n,0.5);i++)
		if(n%i==0) break;
	if(i<pow(n,0.5)) 
	    printf("%d is not a prime number.\n",n);
	else 
	    printf("%d is a prime number.\n",n);
	return 0;
}

