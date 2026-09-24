//4) with parameter and with return

#include<stdio.h>
#include<conio.h>

int add(int a,int b){
	int sum = a+b;
	return sum;	
}

void main()
{
	
	printf("Addition : %d",add(150,120));
	printf("\nadd : %d",add(405,609));
	
	getch();
}
