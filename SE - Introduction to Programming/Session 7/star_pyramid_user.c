
#include<stdio.h>
#include<conio.h>

int main(){
	
	int r,c,s,size;
	printf("Enter number of rows: ");
	scanf("%d",&size);
	
	for(r=1;r<=size;r++){
	
		for(s=1;s<=
		size-r;s++){
			printf(" ");
		}	
		
		for(c=1;c<=r;c++){
			printf("* ");
		}
		printf("\n");
		
	}
	
	return 0;
} 
