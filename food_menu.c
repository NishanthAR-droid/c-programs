//program to display the food menu and read the input from user and display users choice
//Pizza, Rs 239
//Burger, Rs 129
//Pasta, Rs 179
//French Fries, Rs 99
//Sandwich, Rs 149
#include<stdio.h>
main()
{
        int choice;
	printf("Choose an item\n1.sandwich\n2.french fries\n3.burger\n4.pizza\n5.pasta\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :printf("Food item selected-sandwich\nPrice-Rs 149");
		        break;
		case 2 :printf("Food item selected-French Fries\nPrice-Rs 99");
		        break;
		case 3 :printf("Food item selected-Burger\nPrice-Rs 129");
		        break;
		case 4 :printf("Food item selected-Pizza\nPrice-Rs 239");
		        break;
		case 5 :printf("Food item selected-Pasta\nPrice-Rs 179");
		        break;
		default:printf("Please enter a number between 1 and 5");							        
	}
}
