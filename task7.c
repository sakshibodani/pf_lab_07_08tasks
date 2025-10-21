#include <stdio.h>
int main() 
   {
    int arr[10]; int i;
    int search, index = -1;
    printf("enter 10 integers:\n");
    for ( i = 0; i < 10; i++)
	 {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the integer to search: ");
    scanf("%d", &search);
    for (i = 0; i < 10; i++) 
	{
        if (arr[i] == search) 
		{
            index = i;
            break; 
        }
    }
    if (index != -1) 
	{
        printf("Integer %d found at index %d\n", search, index);
    }
     else 
	{
        printf("Integer %d not found in the array\n", search);
        printf("%d\n", index);
    }

}
