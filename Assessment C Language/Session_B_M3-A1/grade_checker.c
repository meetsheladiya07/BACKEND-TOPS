#include<stdio.h>
#include<conio.h>

int main(){
    float perc;

    printf("Enter Percentage: ");

    if (scanf("%f", &perc) != 1){
        printf("Invalid input. Please enter a numeric percentage.\n");
        return 1;
    }

    if (perc < 0 || perc > 100){
        printf("Error: Percentage must be between 0 and 100.\n");
        return 1;
    }

    if (perc >= 90){
        printf("Grade: A\n");
        printf("Excellent work! Keep it up.\n");
    }
    else if (perc >= 75){
        printf("Grade: B\n");
        printf("Good work! Keep pushing.\n");
    }
    else if (perc >= 60){
        printf("Grade: C\n");
        printf("Good effort! Keep improving.\n");
    }
    else if (perc >= 45){
        printf("Grade: D\n");
        printf("You passed! Keep working harder.\n");
    }
    else {
        printf("Grade: F\n");
        printf("Don't give up! Keep learning and try again.\n");
    }

    return 0;
}
