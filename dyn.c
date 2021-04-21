#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,sum;
	a=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	sum=(int*)malloc(sizeof(int));
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}
