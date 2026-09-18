#include<stdio.h>
#include<conio.h>

void main(){
	
	if(12==4){
		printf("inside if");
		if(11>12){
			printf("\n4 is big");
		}
		else{
			printf("\n3 is big");
		}
	}
	else{
		printf("outside else");
	}
	
	getch();
}
