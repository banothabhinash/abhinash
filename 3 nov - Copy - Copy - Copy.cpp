#include<stdio.h>  // replace the blank spaces with $ sign in the string
#include<string.h>
#include<conio.h>
#include<stdlib.h>
main ()
{
  char x[100];
  int i=0;
  printf(" enter the string\n");
  gets(x);
  while (x[i]!='\0')
  {
  	if (x[i]=='')
  	{
  		x[i]='$';
	  }
	  i++
  }
  
	
	
	
	
	
	
	
}
