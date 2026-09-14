/*
	if(codition){
	}
	else{
	}
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int age; 
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	printf("Your Age : %d",age);	
	
	if(age>=18){
		printf("\nAge is Allow");
	}
	else{
		printf("\nAge is Not Allow");
	}
	
	return 0;
}
