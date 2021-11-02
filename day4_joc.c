1.#include<stdio.h>
#include<string.h>
void main(){
  char str[100];
  printf("enter the string\n");
  getS(str);
  printf("%c",str[0]);
  for(int i=0;str[i]!='\0';i++){
    if(str[i]==' ' && isupper (str[i+1]))
      printf("%c",str[i+1]);
  }
}
2.#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the string\n");
	gets(str);
	int count = 0,c_count;
	char b;
	for(int i=0;str[i]!='\0';i++)
	{
		char a = str[i];
		c_count = 1;
		if(a!=' ')
		{
		for(int j=i+1;str[j]!='\0';j++)
		{
			if(a==str[j])
			  	c_count++;
		}
		if(c_count>count)
		{
			count = c_count;
			b = a;
		}
		}
	}
	printf("The most frequent alphabet is %c with count %d",b,count);
}
3.#include<stdio.h>
#include<string.h>
void main(){
  char str1[100],str2[200];
  printf("enter string 1\n");
  scanf("&s",str1);
  printf("enter string 2\n");
  scanf("&s",str2);
  int j;
  for(int i=0;i<strlen(str1);i++){
    char a=str1[0];
    for(j=0;j<strlen(str1)-1;j++){
      str1[j]=str1[j+1];
    }
    str1[j]=a;
    if(strcmp(str1,str2)==0){
      printf("str2 is the rotation of str1\n");
      exit(0);
    }
  }
  printf("str2 is not the rotation of str1\n");
}
