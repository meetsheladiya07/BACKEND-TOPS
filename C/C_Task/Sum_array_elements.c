#include<stdio.h>
#include<conio.h>

void main(){
	
	int arr[5]={5,6,5,6,5};
	
	int i,sum=0;
	
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	
	printf("Sum of Array Elements: %d",sum);

	getch();
}
