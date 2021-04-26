/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[20];
   printf("Enter the string\n");
   gets(str);
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]==' ')
       {
           printf("\n");
           continue;
       }
       printf("%c",str[i]);
   }
}
