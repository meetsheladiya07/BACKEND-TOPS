#include<stdio.h>
#include<conio.h>

int main(){
    FILE *file = fopen("playlist.txt", "r");
    char song[100];


    if (file == NULL){
        printf("File not found!");
        return 1;
    }

    printf("My Playlist:\n\n");

    while (fgets(song, sizeof(song), file) != NULL){
        printf("%s", song);
    }

    fclose(file);

    return 0;
}
