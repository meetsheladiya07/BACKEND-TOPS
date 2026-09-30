#include<stdio.h>
#include<conio.h>

void incrementFollowers(int *followers, int n){
    int i;

    for(i=0;i<n;i++){
        *followers = *followers + 100;

        followers++;
    }
}

void main(){
    int followers[5] = {1200, 2500, 1800, 3200, 4500};
    int i;

    incrementFollowers(followers, 5);

    printf("Updated Instagram Followers:\n");

    for(i=0;i<5;i++){
        printf("Friend %d: %d followers\n", i + 1, followers[i]);
    }

    getch();
}
