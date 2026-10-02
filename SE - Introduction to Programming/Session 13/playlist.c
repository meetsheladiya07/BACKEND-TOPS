#include<stdio.h>
#include<conio.h>

int main(){
    FILE *file = fopen("playlist.txt", "w");
    
	if(file == NULL){
		printf("File not found!\n");
		return 1;
	}	

    fprintf(file, "Kesariya\n");
    fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Apna Bana Le\n");

    fclose(file);

    printf("Songs written successfully to playlist.txt");

    return 0;
}
