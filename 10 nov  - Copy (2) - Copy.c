#include<stdio.h>
#include<string.h>
union data
{
	char str[20];
	int i;
	float f;
};
struct meta
{
	char str[20];
	int i;
	float f;
};

main()
{
	union data d;
	struct meta m;	
	printf("size of union is %d\n",sizeof(d));
	printf("size of structure is %d\n",sizeof(m));
}
