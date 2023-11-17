#include<stdio.h>
main()
{
	int arr[5];
	int n;
	printf(" enter the number of element");
	scanf("%d",&n);
	printf("  \n enter the elements in the array");
	int i;
	for(i=0;i<5;i++)	
	{
		scanf("%d",&arr[i]);
	}
	printf(" \n show the elements in the array");
	for (i=0;i<5; i++)
	{
		printf("\n%d",arr[i]);
	}
}
