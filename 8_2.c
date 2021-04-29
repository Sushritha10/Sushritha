/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 40

struct book
{
    char title[20];
    char author[20];
    int price;
    int page;
};

typedef struct book book;


int main()
{
    book array[max];
    int n,x;
    printf("Enter the number of books you want to have\n");
    scanf("%d",&n);
    printf("Enter the details one by one\n");
    for(int i=0;i<n;i++)
    {
        printf("FOR BOOK %d:\n",i+1);
        scanf("%s%s%d%d",array[i].title,array[i].author,&array[i].price,&array[i].page);
    }

    for(int i=0;i<n;i++)
    {
        printf("THE DETAILS FOR BOOK %d:\n",i+1);
        printf("%s  %s  %d  %d\n",array[i].title,array[i].author,array[i].price,array[i].page);
    }
    printf("Do you want to update values\n(0 or 1)\n");
    scanf("%d",&x);

    if(x)
    {
        char titl[100];
        int f = 0,pr;
        printf("Enter the title of the book\n");
        scanf("%s",titl);
        printf("Enter updated price\n");
        scanf("%d",&pr);
        for(int i=0;i<n;i++)
        {
            if(strcmp(titl,array[i].title)==0)
            {
                array[i].price = pr;
                f =1;
                printf("THE UPDATED DETAILS FOR BOOK %d:\n",i+1);
                printf("%s  %s  %d  %d\n",array[i].title,array[i].author,array[i].price,array[i].page);
                break;
            }
        }
        if(!f)printf("Book not found\n");
    }
    else
        printf("close\n");
    return 0;
}
