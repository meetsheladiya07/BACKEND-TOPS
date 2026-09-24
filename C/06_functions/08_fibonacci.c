// 0 1 1 2 3 5 8 13 

#include<stdio.h>
#include<conio.h>

int fibonacci(int n){
	int i,t1=0,t2=1,nt;
	for(i=1;i<=n;i++){
		printf("%d ",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
		
	}
}

void main()
{
	int num;
	printf("Enter your Num : ");
	scanf("%d",&num);
	printf("\nFibonacci Series : \n");
	fibonacci(num);
	getch();
}
