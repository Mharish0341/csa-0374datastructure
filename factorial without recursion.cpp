#include<stdio.h>
#include<math.h>
int main()
{
	int fact=1,n,i;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0){
		printf("Factorial is not defined for negative numbers.\n");
	}
	else{
		for (i=1;i<=n;++i){
			fact*=i;
		}
	}
	printf("%d is factorial of %d",fact,n);
}