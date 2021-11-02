1.#include<stdio.h>
int main()
{
  int n = 8,ptr=0,arr[8],b[8];
  printf("Enter the number on ballons\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(ptr==0)
    {
      b[0]=arr[0];
      ptr++;
    }
    else
    {
      int flag=0;
      for(int j=0;j<ptr;j++)
      {
        if(arr[i]==b[j])
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
      {
        b[ptr++]= arr[i];
      }
     }
  }
  for(int i=0;i<ptr;i++)
  printf("%d\n",b[i]);
 }
2.#include<stdio.h>
#include<stdlib.h>
void main(){
int arr[6],i,j;
int a,b;
int k=5;
int n=6;
printf("enter the elements in the array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++){
a=i;
for(j=i+1;j<n;j++){
b=j;
if(arr[i]+arr[j]==k){
printf("indices are found at %d and %d \n",a,b);
}}}}