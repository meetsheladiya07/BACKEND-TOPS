#include<stdio.h>
#include<conio.h>

void max(int a, int b){
	int max=a>b?a:b;
	printf("Maximum : %d",max);
}

void main(){
	
	max(20,30);
	
	getch();
}
