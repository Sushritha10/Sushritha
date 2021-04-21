#include<stdio.h>

struct sum
{
	int a,b;
};
struct sum s;
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int sum;
	printf("enter the values\n");
	scanf("%d%d",&s.a,&s.b);
	sum=add(s.a,s.b);
	printf("%d\n",sum);
}
