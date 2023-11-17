#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	int rollno;
    float cgpa;
} s2,s3,s4;
main()
{
	struct student s1, s4;
	 /*strcpy(s1.name,"subbarao");
	 s1.rollno=45;
	 s1.cgpa=9.5;*/
	gets(s1.name);
	scanf("%d",&s1.rollno);
	scanf("%f",&s1.cgpa);
	puts(s1.name);
	s4=s1;
	printf("rollno= %d cgpa = %f \n",s1.rollno,s1.cgpa);
	 
}
