#include<stdio.h>
#include<conio.h>

int main(){
    FILE *file = fopen("playlist.txt", "a");

    if (file == NULL){
        printf("File not found!");
        
        return 1;
    }

    fprintf(file, "Chaleya\n");
    fprintf(file, "Heeriye\n");
    fprintf(file, "Love me like you do\n");

    

    fclose(file);

    printf("songs added successfully!");

    return 0;
}
