#include<stdio.h>
#include<conio.h>

// Function to check whether a number is even
int isEven(int num){

    // Check if the number is divisible by 2
    if (num % 2 == 0){
        // Return 1 if the number is even
        return 1;
    }
    else{
        // Return 0 if the number is odd
        return 0;
    }
}

void main(){
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the isEven function
    if (isEven(num)){
        printf("%d is Even", num);
    }
    else{
        printf("%d is Odd", num);
    }

    getch();
}
