#include<stdio.h>
#include<conio.h>

void main()
{	
	int i,s;
	
	printf("Enter the size of Array : ");
	scanf("%d",&s);
	
	int a[s];
	
	for(i=0;i<s;i++){
		printf("Enter your Num : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<s;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	getch();
}
