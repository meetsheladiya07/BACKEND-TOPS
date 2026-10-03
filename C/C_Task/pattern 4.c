/*
*********
 *******
  *****
   ***
    */
#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,s;
	
	for(i=5;i>0;i--){
		for(s=1;s<=5-i;s++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
