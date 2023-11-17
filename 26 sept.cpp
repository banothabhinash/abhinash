#include<stdio.h>
main()
{
	int n;
	printf(" enter the elements for an array");
	scanf("%d", &n);
	int x[]={1,3,5,6,7};
	int i;
	for (i=0; i<n; i++)
	{
		printf("%d\n",x[i]);
	}
}
