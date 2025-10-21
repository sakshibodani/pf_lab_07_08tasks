#include<stdio.h>
int main()
{
	int arr1[5], arr2[5], merge[10], i,j ;
	printf("Enter 5 integers: ");
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter 5 more integers: ");
	for(j=0; j<5; j++)
	{
		scanf("%d", &arr2[j]);
	}
	printf("the merged array is: ");
	for(i=0; i<5; i++)
	{
		merge[i]=arr1[i];
    }
    for (i=0; i < 5; i++) {
        merge[i + j] = arr2[i];
    }
    
    printf("\nMerged Array: ");
    for (i=0; i < 10; i++) {
        printf("%d ", merge[i]);
    }
    printf("\n");
}
