/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
        
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    while (str[i] != '\0')
    {
        printf("The Character at %d Position = %c \n", i, str[i]);
        i++;
    }
    return 0;
}