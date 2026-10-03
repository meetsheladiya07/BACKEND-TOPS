#include<stdio.h>
#include<conio.h>

void main(){
	int a=10,b=20,temp;
	
	printf("Before Swaping : A=%d,B=%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nAfter Swaping : A=%d,B=%d",a,b);
	
	getch();
}
