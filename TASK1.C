#include<stdio.h>
int main()
{
	int num[5];
	int i;
	int sum=0;
	printf("enter 5 numbers:");
	for(i=0; i<9; i++)
	{
	     scanf("%d", &num[i]);
	     sum=sum+num[i];
	}
	printf("the sum is: %d ", sum);
}
