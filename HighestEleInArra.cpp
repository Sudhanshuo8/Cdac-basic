#include<stdio.h>
int main()
{
	
	int arr[50];
	int num,max;
	
//	printf("Enter the no of element to store in the array\n");
//	scanf("%d",&num);
	
	printf("Enter the values\n");
	                                
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}	
	}
	printf("\n %d is the greatest no in an array. ",max);
	
	return 0;
	
}
