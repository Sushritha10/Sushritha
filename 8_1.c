/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

struct book
{
    char title[10];
    char author[10];
    int id;
    float price;
};


int main()
{
    struct book b;
    printf("enter the book title,author name,book id and price\n");
    scanf("%s%s%d%f",&b.title,&b.author,&b.id,&b.price);
    printf("\n");

    printf("title=%s author=%s  id=%d price=%f",b.title,b.author,b.id,b.price);

    return 0;
}
