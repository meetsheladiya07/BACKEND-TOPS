#include<stdio.h>
#include<conio.h>

int main(){
    float hours[7];
    float total = 0, average;
    int i,j,hDay = 0;

    for (i=0;i<7;i++){
        do{
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &hours[i]);

            if (hours[i] < 0 || hours[i] > 24){
                printf("Invalid input. Enter hours between 0 and 24.\n");
            }

        } while (hours[i] < 0 || hours[i] > 24);

        total += hours[i];

        if (hours[i] > hours[hDay]){
            hDay = i;
        }
    }

    average = total / 7;

    printf("\nWeekly Total: %.2f hours\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Highest Study Hours: Day %d\n", hDay + 1);

    for (i=0;i<7;i++){
        printf("Day %d: ", i + 1);

        for (j=0;j<(int)hours[i];j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
