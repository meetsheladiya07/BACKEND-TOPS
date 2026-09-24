#include<stdio.h>
#include<conio.h>

void main()
{	
	int i,j,s,temp;
	
	printf("Enter the size of Array : ");
	scanf("%d",&s);
	
	int a[s];
	
	for(i=0;i<s;i++){
		printf("Enter your Num : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<s;i++){
		for(j=i+1;j<s;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nDescending order : \n");
	
	for(i=0;i<s;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	getch();
}
