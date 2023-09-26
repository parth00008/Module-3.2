#include<stdio.h>
main()
{
	char weeks;
	
	printf("enter the days:");
	scanf("%c",&weeks);
	
	switch(weeks)
	{
		case 'a':printf("monday");
		break;
		case 'b':printf("tuesday");
		break;
		case 'c':printf("wednusday");
		break;
		case 'd':printf("thursday");
		break;
		case 'e':printf("friday");
		break;
		case 'f':printf("saturday");
		break;
		case 'g':printf("sunday");
		break;
		default:printf("enter valid input!...");
	}
}
