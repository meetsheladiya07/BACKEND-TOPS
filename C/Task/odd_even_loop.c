#include<stdio.h>
#include<conio.h>

void main(){
	int i;
	
	/*printf("Even Numbers : ");
	
	for(i=1;i<=10;i++){
		if(i%2==0){
			printf("\n%d",i);
		}
	}*/
	
	printf("Odd Numbers : ");
	
	for(i=1;i<=50;i++){
		if(i%2!=0){
			printf("\n%d",i);
		}
	}

	getch();
}
