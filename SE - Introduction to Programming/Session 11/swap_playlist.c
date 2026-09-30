#include<stdio.h>
#include<conio.h>

void swapPlaylistCounts(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int playlist1 = 25;
    int playlist2 = 40;

    printf("Before Swapping:\n");
    printf("Playlist 1: %d songs\n", playlist1);
    printf("Playlist 2: %d songs\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter Swapping:\n");
    printf("Playlist 1: %d songs\n", playlist1);
    printf("Playlist 2: %d songs\n", playlist2);

    getch();
}
