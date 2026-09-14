#include<stdio.h>
#include<conio.h>

void main()
{
    int subj1, subj2, subj3;
    int avg;

    printf("Enter the marks of three subjects : ");
    scanf("%d %d %d", &subj1, &subj2, &subj3);

    // Marks validation
    if(subj1 > 100 || subj1 < 0)
    {
        printf("\nInvalid marks of Subject1");
    }
    else if(subj2 > 100 || subj2 < 0)
    {
        printf("\nInvalid marks of Subject2");
    }
    else if(subj3 > 100 || subj3 < 0)
    {
        printf("\nInvalid marks of Subject3");
    }
    else
    {
        // First check whether any subject is below 35
        if(subj1 < 35 || subj2 < 35 || subj3 < 35)
        {
            printf("\nStudent Failed");

            if(subj1 < 35)
            {
                printf("\nSubject1 = %d", subj1);
            }

            if(subj2 < 35)
            {
                printf("\nSubject2 = %d", subj2);
            }

            if(subj3 < 35)
            {
                printf("\nSubject3 = %d", subj3);
            }
        }
        else
        {
        	avg = (subj1 + subj2 + subj3) / 3;

            // No subject is below 35, now check average
            if(avg >= 85 && avg<=100 )
            {
                printf("\nA Grade Student");
            }
            else if(avg >= 70 && avg<85)
            {
                printf("\nB Grade Student");
            }
            else if(avg < 70 && avg>=55)
            {
                printf("\nC Grade Student");
            }
            else if(avg >= 35 && avg<55)
            {
                printf("\nD Grade Student");
            }
        }
    }

    getch();
}
