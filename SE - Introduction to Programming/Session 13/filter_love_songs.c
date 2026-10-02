#include<stdio.h>
#include<conio.h>
#include<string.h>

void toLowerCase(char str[]){
    int i;

    for (i=0;str[i] != '\0';i++){
        str[i] = tolower(str[i]);
    }
}

int main(){
	
    FILE *file = fopen("playlist.txt", "r");
    char song[100];
    char lowerSong[100];

 
    if (file == NULL){
        printf("File not found!");
        return 1;
    }

    printf("Songs containing the word 'love':\n\n");

    while (fgets(song,sizeof(song),file) != NULL){
        strcpy(lowerSong, song);

        toLowerCase(lowerSong);

        if (strstr(lowerSong, "love") != NULL){
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}
