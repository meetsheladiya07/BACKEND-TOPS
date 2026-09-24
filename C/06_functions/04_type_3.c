//3) with parameter and without return

#include<stdio.h>
#include<conio.h>

void add(int a,int b){
	int sum = a+b;
	printf("Sum : %d\n",sum);
}

void main()
{
	add(30,20);
	add(50,30);
	add(10,85);
	getch();
}
