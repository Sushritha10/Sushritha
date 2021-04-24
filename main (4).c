/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // array declaration 
    int arr[10], arr_size;int i,j,k;
    printf("Enter the number of elements \n");
    scanf("%d",&arr_size);
    printf("Enter the array elements \n");
    for(i=0;i<arr_size;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("The elements are \n");
        for(j=0;j<arr_size;j++)
    {
         printf("%d",arr[j]);
    }
    printf("\nThe even numbers in the array are\n");
    for(k=0;k<arr_size;k++)
    {
         if(arr[k]%2==0)
            printf("%d\t", arr[k]);
    }
    return 0;
}