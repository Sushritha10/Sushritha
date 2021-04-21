#include<stdio.h>
void main()
{
	int i,num,n,odd,even,rem,digit;
	printf("enter the number of digits in the integer\n",num);
	scanf("%d",&num);
	printf("enter the integer\n",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		digit=n%10;
		n=n/10;
		rem=n%2;
		if(digit%2==0)
		printf("even:%d\n",digit);
		else
		printf("odd:%d\n",digit);
	}
	return 0;
}		
