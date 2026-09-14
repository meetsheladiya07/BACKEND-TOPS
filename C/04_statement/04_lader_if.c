/*
	if(){
		..code
	}
	else if(){
		..code
	}
	else{
	}
*/
#include<stdio.h>
#include<conio.h>

void main(){
	
	int marks;
	printf("Enter your Marks : ");
	scanf("%d",&marks);
	printf("your Marks :%d",marks);
	
	if(marks > 100 || marks < 0){
		printf("\nInavlid marks");
	}
	else if(marks>=85 && marks<=100){
		printf("\nA grade Student");
	}
	else if(marks >= 70 && marks<85){
		printf("\nB Grade Student");
	}
	else if(marks < 70 && marks>=55){
		printf("\nc Grade Student");
	}
	else if(marks >= 35 && marks<55){
		printf("\nD Grade Student");
	}
	else{
		printf("\nfailed student");
	}
	
		
	getch();
}
