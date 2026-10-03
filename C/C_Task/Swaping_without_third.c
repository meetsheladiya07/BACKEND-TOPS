#include<stdio.h>
#include<conio.h>

void main(){
	int a=10,b=20;
	
	printf("Before Swaping : A=%d,B=%d",a,b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nAfter Swaping : A=%d,B=%d",a,b);
	
	getch();
}
