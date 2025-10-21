#include<stdio.h>
int main()
{
	char str[100], rslt[100];
	int i=0 ,j=0 ;
	printf("enter a string: ");
	scanf("%[^\n]", str);
	while(str[i]!='\0')
	{
		if(str[i]<'0' || str[i]>'9')
		{
			rslt[j]= str[i];
			j++;
		}
	i++;	
	}
	rslt[j]='\0';
	printf("string without numbers: %s\n", rslt);
}
