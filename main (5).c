/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//function prototypes 
void read_arr(int *,int );
void print_arr(int *,int );
int ret_max(int *,int);
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  maximum element in the arrays is %d\n", ret_max(arr, arr_size));
    return 0;
}  

void read_arr(int arr[10],int arr_size ) 
{
    for( int i=0;i<arr_size;i++)
    {
         scanf("%d",&arr[i]);
    }
}
    
void print_arr(int arr[10],int arr_size) 
{
    for(int j=0;j<arr_size;j++)
    {
         printf("%d\n",arr[j]);
    }
}
    
 int ret_max(int arr[10],int arr_size )
 {
    int max=arr[0];int k=1;
    for(k;k<arr_size;k++)
    {
        if(max<arr[k])
        {
            max=arr[k];
        }
        
    }
    
    
    

    return max;
 }