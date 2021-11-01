1.#include <stdio.h>
#include<stdlib.h>
void main()
{
int arr[10];
int i,j;
int n=10;
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++){
if(arr[i]==arr[j]){
printf("array not distinct\n");
exit(0);
}
}
}
printf("array distinct\n");

}

2.#include<stdio.h>
void main(){
int arr[10],size,count,freq[20];
int i,j,n=10;
printf("enter the array elements\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
freq[i]=-1;
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(arr[i]==arr[j]){
count++;
freq[i]=0;
}
}
if(freq[i]!=0){
freq[i]=count;
}
}
printf("the freauency of each elements in the array is\n");
for(i=0;i<n;i++){
if(freq[i]!=0){
printf("%d's:%d\n",arr[i],freq[i]);
}
}
}