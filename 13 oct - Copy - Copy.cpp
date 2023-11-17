#include<stdio.h>
main()
{
	int a=9;
	int *aptr;
	aptr= &a;
	printf(" value of a = %d\n",a);
	printf(" address of a = %u\n",&a);
	printf(" address of aptr pointer = %u\n",&aptr);
	
	printf("what address is held at pointer= %u",aptr);
	printf("the value held at aptr = %d",*aptr);
	
	
	
	
	
	
	
	
	
}
