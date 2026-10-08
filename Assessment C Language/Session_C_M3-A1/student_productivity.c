#include<stdio.h>
#include<conio.h>

struct StudyLog{
    char sub[40];
    float hours[7];
};

void DWR(struct StudyLog logs[], int n){
    float total, average;
    int i,j,k;

    printf("\n========== WEEKLY REPORT ==========\n");

    for (i=0;i<n;i++){
        total = 0;

        for (j=0;j<7;j++){
            total += logs[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", logs[i].sub);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);

        printf("Progress Chart:\n");

        for (j=0;j<7;j++){
            printf("Day %d: ", j + 1);

            for (k=0;k<(int)logs[i].hours[j];k++){
                printf("*");
            }

            printf("\n");
        }
    }
}

int main(){
    struct StudyLog logs[3];
    int choice,day,i,j;

    for (i=0;i<3;i++){
        printf("Enter subject %d: ", i + 1);
        scanf(" %[^\n]", logs[i].sub);

        for (j=0;j<7; j++){
            logs[i].hours[j] = 0;
        }
    }

    do{
        printf("\n========== STUDENT PRODUCTIVITY TRACKER ==========\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1){
            printf("\nEnter today's day number (1-7): ");
            scanf("%d", &day);

            if (day >= 1 && day <= 7){
                for (i = 0; i < 3; i++){
                    printf("Enter study hours for %s: ", logs[i].sub);
                    scanf("%f", &logs[i].hours[day - 1]);
                }
            }
            else{
                printf("Invalid day number.\n");
            }
        }

        else if (choice == 2){
            DWR(logs, 3);
        }

        else if (choice == 3){
            FILE *file;

            file = fopen("productivity_log.txt", "w");

            for (i=0;i<3;i++){
                fprintf(file, "%s:", logs[i].sub);

                for (j=0;j<7;j++){
                    fprintf(file, "%.2f,", logs[i].hours[j]);
                }

                fprintf(file, "\n");
            }

            fclose(file);

            printf("Records saved to productivity_log.txt\n");
            printf("Exiting program...\n");
        }

        else{
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
