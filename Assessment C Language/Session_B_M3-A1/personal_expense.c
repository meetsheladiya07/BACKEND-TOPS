#include<stdio.h>
#include<conio.h>

struct Expense{
    char category[30];
    float amount;
};

int main(){
    struct Expense exp[10];
    int choice,i;
    int count = 0;
    float total;

    do    {
        printf("\n--- Personal Expense Logger ---\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1){
            if (count < 10){
                printf("Enter category: ");
                scanf(" %[^\n]", exp[count].category);

                printf("Enter amount: ");
                scanf("%f", &exp[count].amount);

                count++;
                
                printf("Expense added successfully.\n");
            }
            else
            {
                printf("Expense limit reached. Maximum 10 entries allowed.\n");
            }
        }

        else if (choice == 2){
            total = 0;

            printf("\n--- All Expenses ---\n");
            printf("Category\t\tAmount\n");
            printf("-----------------------------\n");

            for (i=0;i<count;i++){
                printf("%-20s\t%.2f\n",
                       exp[i].category,
                       exp[i].amount);

                total += exp[i].amount;
            }

            printf("-----------------------------\n");
            printf("Running Total: %.2f\n", total);
        }

        else if (choice == 3){
            FILE *file;

            file = fopen("expenses.txt", "w");

            for (i=0;i<count;i++){
                fprintf(file, "%s:%.2f\n",
                        exp[i].category,
                        exp[i].amount);
            }

            fclose(file);

            printf("Expenses saved to expenses.txt\n");
            printf("Exiting program...\n");
        }

        else{
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
