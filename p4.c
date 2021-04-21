#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter the integer\n",n);
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)   //not prime number
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if (n==1)
	{
		printf("1 is neither prime nor composite\n");
	}
	else
	{
		if(flag==0)
		printf("%d is a prime num\n",n);
		else
		printf("%d is not a prime num\n",n);
	}
	return 0;
}
