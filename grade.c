//program to print the grade of a student according to following criteria 
//85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F
#include<stdio.h>
main()
{
	int marks;
	printf("Enter the marks\n ");
	scanf("%d",&marks);
	if(marks>=85 && marks<=100)
	{
		printf("You got Grade A\n");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("You got Grade B\n");
	}
	else if(marks>=55 && marks<=69)
	{
		printf("You got Grade C\n");
	}
	else if(marks>=40 && marks<=54)
	{
		printf("You got Grade D\n");
	}
	else
	{
		printf("You got Grade F\n");
	}
}
