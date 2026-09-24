#include<stdio.h>
#include<conio.h>

void main(){
	int dailySteps[7]={5000,890,2100,2350,7890,5606,6230};
	
	int i;
	for(i=0;i<7;i++){
		printf("\nSteps Of day %d is %d ",i+1,dailySteps[i]);
	}
	getch();
}
