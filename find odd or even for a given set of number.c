#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int number[n];
	for (i=0;i<n;i++){
		scanf("%d",&number[i]);}	
	for (i=0;i<n;i++){
		if(number[i]%2==0)
		{
			printf("%d is a even number\n",number[i]);
		}
		else
		{
			printf("%d is a odd number\n",number[i]);
		}
	}
}