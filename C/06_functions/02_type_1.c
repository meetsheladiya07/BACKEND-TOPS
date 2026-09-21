/*
	1) without paramter and without return
	
	void funcion_name(){
		
	}
*/

#include<stdio.h>
#include<conio.h>

void demo(){
	printf("\nHello This Demo Function\n");
}

void test(){
	int i;
	for(i=1;i<=30;i++){
		printf("*");
	}
}

void main(){
	
	test();
	demo();
	test();
	demo();
	test();
	printf("\nMeet Sheladiya\n");
	test();
	demo();
	test();
	demo();
	test();
	
	getch();
}
