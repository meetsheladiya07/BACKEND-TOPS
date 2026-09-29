#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char str1[20],str2[20];
	printf("Enter The String 1 : ");
	gets(str1);
	printf("\nEnter The String 2 : ");
	gets(str2);
	
	if(strcmp(str1,str2)==0){
		printf("\nBoth Strings Are Same");
	}
	
	else{
		printf("\nBoth Strings Are Not Same");
	}
	getch();
}
