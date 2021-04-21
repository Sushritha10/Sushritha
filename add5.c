#include<stdio.h>
#include<stdlib.h>
int getnode()
{
	int p;
	p=(int*)malloc(sizeof(int));
	return p;
}
void accept(int *a,int *b)
{
	scanf("%d%d",a,b);
}
void calculate(int a,int b,int *sum)
{
	*sum=a+b;
}
void display(int sum)
{
	printf("result is %d",sum);
}
void main()
{
	int a,b,sum;
	a=getnode();
	b=getnode();
	accept(&a,&b);
	calculate(a,b,&sum);
	display(sum);
}
