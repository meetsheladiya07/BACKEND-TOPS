#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num>0){
		printf("\nNumber is Positive");
	}
	
	else if(num<0){
		printf("\nNumber is Negative");
	}
	
	else{
		printf("\nZero is neither positive nor negative");
	}
	
	getch();
}
