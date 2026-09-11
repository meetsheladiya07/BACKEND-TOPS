#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 25;
	int b = 15; 
	
	int gr = a > b; 
	printf("max : %d",gr);
	
	int min = a < b;
	printf("\nmin : %d",min);
	
	int x = 15;
	int y = 28;
	
	int com = x == y;
	printf("\nCom : %d",com);
	
	int data = x != y;
	printf("\ndata :%d",data);
	
	return 0;
}
