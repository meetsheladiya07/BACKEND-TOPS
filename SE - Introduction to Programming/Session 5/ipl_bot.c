#include<stdio.h>
#include<conio.h>

void main() {
    char team[10];

    printf("Enter IPL team shortcut (MI, CSK, RCB, KKR, RR, SRH, DC, PBKS, LSG, GT): ");
    scanf("%s", team);

    if (strcmp(team, "MI") == 0)
        printf("Go Mumbai Indians!");

    else if (strcmp(team, "CSK") == 0)
        printf("CSK for the win!");

    else if (strcmp(team, "RCB") == 0)
        printf("Ee Sala Cup Namde!");

    else if (strcmp(team, "KKR") == 0)
        printf("Korbo Lorbo Jeetbo!");

    else if (strcmp(team, "RR") == 0)
        printf("Halla Bol Rajasthan Royals!");

    else if (strcmp(team, "SRH") == 0)
        printf("Go Sunrisers Hyderabad!");

    else if (strcmp(team, "DC") == 0)
        printf("Come on Delhi Capitals!");

    else if (strcmp(team, "PBKS") == 0)
        printf("Go Punjab Kings!");

    else if (strcmp(team, "LSG") == 0)
        printf("Go Lucknow Super Giants!");

    else if (strcmp(team, "GT") == 0)
        printf("Go Gujarat Titans!");

    else
        printf("Team not found!");

    getch();
}
