#include<stdio.h>
int main()
{
	char str[100];
	int count=0, i=0;
	printf("enter a string: ");
	scanf("%[^\n]", str);
	while(str[i]!='\0')
	{
		if(str[i]  ==' ' || str[i]== '\t' || str[i]== '\n')
		{
			count++;
		}
		i++;
		
	}
	printf("number od whitespaces are: %d\n", count);
}
