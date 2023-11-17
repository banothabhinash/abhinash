#include<stdio.h>
main()
{
	int m;
	int a=10, b=5, c;
	printf(" enter your choice of character: ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("your choice is addtion ");
			c=a+b;
			printf("addition is %d",c);
		break;
        case 2:
        	printf("\n your choice is subtract ");
        	c=a-b;
        	printf("subtraction is %d",c);
        break;
        
        default:
        	printf("your choice is not present");
	}
}
