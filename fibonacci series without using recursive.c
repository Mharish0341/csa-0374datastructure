#include<stdio.h>
int main()
{
	int num,n1=0,n2=1,n;
	printf("enter the number of element:");
	scanf("%d",&num);
	for (int i=0;i<num;i++)
	{
		n=n1+n2;
		n1=n2;
		n2=n;
		printf("%d \t",n2);}
}