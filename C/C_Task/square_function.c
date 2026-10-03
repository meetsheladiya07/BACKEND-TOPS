#include<stdio.h>
#include<conio.h>

void square(int a){
	int s=a*a;
	printf("Square of %d : %d",a,s);
}

void main(){
	
	square(20);
	
	getch();
}
