#include<stdio.h>
#include<conio.h>


void main() {
    char songs[3][30] = {
        "Kesariya",
        "Apna Bana Le",
        "Tum Hi Ho"
    };

    char guess[30];
    int random;

    random = rand() % 3;

    do {
        printf("\nGuess the Song!\n");
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[random]) == 0) {
            printf("Correct! You guessed the song!\n");
        } else {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[random]) != 0);

    getch();
}
