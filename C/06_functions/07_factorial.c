// 5 * 4 * 3 *2 *1 = 120

#include<stdio.h>
#include<conio.h>

int total(int n){
	int i,sum=1;
	for(i=n;i>=1;i--){
		sum = sum * i;
	}
	return sum;
}

void main()
{
	int num;
	printf("Enter your Num : ");
	scanf("%d",&num);
	printf("Num of value : %d",num);
	printf("\nTotal Factorial : %d",total(num));
	
	getch();
}
