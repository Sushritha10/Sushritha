#include<stdio.h>
void printdigit(int N)
{
	int r;
	if(N==0)
	{
		return;
	}
	r=N%10;
	printdigit(N/10);
	printf("%d\n",r);
}
void main()
{
	int N=43526;
	printdigit(N);
	return;
}
