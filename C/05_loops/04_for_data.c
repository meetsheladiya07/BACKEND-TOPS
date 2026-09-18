#include<stdio.h>
#include<conio.h>

void main(){
	
	int i;
	

//	4 5 6 7
//	for(i=1;i<=10;i++){
//		if(i>=4 && i<=7){
//			printf("\n%d",i);
//		}
//	}

//	1 2 3 8 9 10	
//	for(i=1;i<=10;i++){
//		if(i<4 || i>7){
//			printf("\n%d",i);
//		}
//	}
	
	for(i=1;i<=10;i++){
		if(!(i>=4 && i<=7)){
			printf("\n%d",i);
		}
	}
	
	getch();
}
