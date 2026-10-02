#include<stdio.h>
#include<conio.h>

void main(){
	
    int i;

    // Check every number from 1 to 10
    for (i=1;i<=10;i++)
    {
        // If remainder is 0, the number is even
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }

    getch();
}
