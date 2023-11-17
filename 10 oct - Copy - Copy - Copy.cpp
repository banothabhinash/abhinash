#include<stdio.h>
main()
{
	int a[5]={9,3,6,1,2};
	int N=5; // total elements
	int i=0; // loop variable
	int index= 3; // index location for entering the element
	int  value =3;
	printf("\n printing the elements of the array before insertion \n");
	for (i=index; i<N; i++)
	{
		printf("%d", a[i]);
	}
	// let us shift to right side 
	for(i=N; i>=index;i--)
	{
		a[i]= a[i+1];
	}
	a[index]= value;
	N--;
	printf("\n printing the elements of the array after insertion \n");
	for (i=index; i<N; i++)
	{
		printf("%d", a[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
  }  
