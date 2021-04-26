/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void accept(char *str)
{
    printf("Enter the string\n");
    scanf("%s",str);
}
void display(char *str)
{
     printf("The string is:\n%s",str);
}

int main()
{
    char *str;
    str=(char*)malloc(20*sizeof(char));
    accept(str);
    display(str);
}