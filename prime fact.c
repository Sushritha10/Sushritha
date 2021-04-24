/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }    
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
 
    if (n > 2)
        printf ("%d ", n);
}
int main()
{
    int n=247;
    primeFactors(n);
    return 0;
}

