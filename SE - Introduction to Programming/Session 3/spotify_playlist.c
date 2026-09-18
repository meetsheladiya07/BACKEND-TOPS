#include<stdio.h>
#include<conio.h>

void main() {
    char pName[] = "My Favorite Songs";
    int totalsong = 25;
    float duration = 3.5;

    printf("My Spotify playlist '%s' has %d songs with an average duration of %.1f minutes.",
           pName, totalsong, duration);

    getch();
}
