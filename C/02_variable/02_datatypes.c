/*
	datatype : primtive and no primtive
	
	datatype vari-name = value
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
//	int : 
	
	int a = 10; // 4
	printf("a : %d",a);
	
	int A = -21;
	printf("\nA : %i",A);
	
//	 float : decimal 
	
	float x = 23.567; // 8 
	printf("\nx : %f",x);
	printf("\nx : %.2f",x);
	printf("\nx : %.1f",x);
	printf("\nx : %.f",x);
	
	
//	char : 1 bytes 

	char data = 'M';
	printf("\nData : %c",data);
	
	getch();
}
