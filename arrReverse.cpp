#include<stdio.h>

int main()
{
	
	int num;
	int arr[20];
	
	printf("Enter the no of elements\n");
	scanf("%d",&num);
	
	printf("Enter the values\n");
	
	for(int i=0;i<num;i++)
	{
	scanf("%d",&arr[i]);	
	}
	
	for(int i=num-1;i>=0;i--)
	{
		printf("\t%d\n",arr[i]);
	}
	
	return 0;
	
}
