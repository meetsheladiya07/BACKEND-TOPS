/*
	if  : only true 
	
	if(codition){
		..code
	}
	
*/
#include<stdio.h>
#include<conio.h>

void main(){
	
	int age; 
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	printf("Your Age : %d",age);
	
//	if(age>=18){
//		printf("\nAge is Allowed for car");
//	}

	if(age<=18){
		printf("\nAge is not Allowed for car");
	}	
	
	getch();
}
