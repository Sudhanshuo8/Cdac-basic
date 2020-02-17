#include<stdio.h>

int main()
{
	
	int arr[50];
	int num;
	
	printf("Enter the no of element to store in the array\n");
	scanf("%d",&num);
	
	printf("Enter the values\n");
	
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n");//to keep space betwwen scanned elements and printed elements
	
	for(int i=0;i<num;i++)
	{
		printf("%d\n",&arr[i]);
	}
	
	return 0;
	
}
