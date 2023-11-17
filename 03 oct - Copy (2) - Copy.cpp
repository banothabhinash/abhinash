#include<stdio.h>
void ref1(int x);
main()
{
	int arr[6]={9,8,7,6,5,4};
	ref1( arr[5]); // function call which is having parameter as an array
}
void ref1(int x)
{
	 
	printf("%d",x);
int min=x[0];
int i=0;
    for(i=0;i<5;i++)
    {
    	if (min>x[i])
    	{
    		min=x[i];printf("\n min is %d")
		}
		
	}


}
