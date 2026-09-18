#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\nNumber is Even");
	}
	else{
		printf("\nNumber is Odd");
	}
	getch();
}
