#include<stdio.h>
#include<conio.h>

void main(){
	
	int arr[5]={5,6,5,6,7};
	
	int i,j,temp;
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("Largest Element Of Array : %d",arr[0]);

	getch();
}
