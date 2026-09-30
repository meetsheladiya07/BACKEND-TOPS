#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 10;
	int *ptr = &x;
	
	printf("x : %d",x);
	printf("\np : %d",ptr); //address of x 
	printf("\nPtr : %d",*ptr); // *pointer
	
	getch();
}
