#include<stdio.h>
#include<conio.h>

void cube(int a){
	int s=a*a*a;
	printf("Cube of %d : %d",a,s);
}

void main(){
	
	cube(11);
	
	getch();
}
