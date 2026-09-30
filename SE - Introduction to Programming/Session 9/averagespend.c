#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	
	int zomato[7]={250,171,85,96,230,781,561};
	
	int i,sum=0,len;
	len=strlen(zomato);
	
	for(i=0;i<len;i++){
		sum=sum+zomato[i];
	}
	
	float avg=(sum/len);
	
	printf("Average Spend For The Week : %f",avg);
	
	getch();
}
