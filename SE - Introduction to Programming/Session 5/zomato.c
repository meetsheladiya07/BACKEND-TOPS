#include<stdio.h>
#include<conio.h>

void main() {
    int meal;

    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter choice: ");
    scanf("%d", &meal);

    switch (meal) {
        case 1:
            printf("Try Dhokla!");
            break;

        case 2:
            printf("Try Gujarati Thali!");
            break;

        case 3:
            printf("Try KHichdi Kadhi!");
            break;

        case 4:
            printf("Try Panipuri!");
            break;

        default:
            printf("Try some fruits!");
    }

    getch();
}
