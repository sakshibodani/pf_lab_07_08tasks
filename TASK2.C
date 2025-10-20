#include<stdio.h>
int main()
{
	int n;
	int rev=0;
	printf("how many numbers u want to enter?");
	scanf("%d", &n);
	int num[n];
	printf("enter %d number:", n);
	for(int i=0; i<n; i++)
	{
       scanf("%d", &num[i]);
	}
	for(int i= n-1; i>=0; i--)
	{
		printf("%d", num[i]);
	}
}
