#include<stdio.h>
int main()
{
	int n;
	int num[n];
	printf("enter array size: ");
	scanf("%d", &n);
	int i;
	int j;
	for(i=0; i<n; i++)
	{
		printf("element [%d]: ",i+1);
		scanf("%d", &num[i]);
    }
    printf("output:");
    int duplicate=0;
    for(i=0; i<n; i++)
    {
    	for(j=i+1; j<n; j++)
    	{
    		if(num[i]==num[j])
    		{
    			printf("number %d ", num[i]);
    			duplicate =1;
    	        break;
    			
			}
		}
	}
	if(duplicate)
	printf("in array occur more than once.\n");
	else
	printf("no element occurs more than once.\n");

}
