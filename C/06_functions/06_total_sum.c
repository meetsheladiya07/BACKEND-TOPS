// 1 2 3 4 5 = 15

#include<stdio.h>
#include<conio.h>

int total(int n){
	int i,sum=0;
	for(i=n;i>=0;i--){
		sum = sum + i;
	}
	return sum;
}

void main()
{
	int num;
	printf("Enter your Num : ");
	scanf("%d",&num);
	printf("Num of value : %d",num);
	printf("\nTotal sum : %d",total(num));
	
	getch();
}
