#include<stdio.h>
#include<conio.h>

void main(){
	
	int arr[5]={5,6,5,6,8};
	
	int i,odd=0,even=0;
	
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	
	printf("%d Even And %d Odd Number In Array",even,odd);

	getch();
}
