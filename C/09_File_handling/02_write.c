#include<stdio.h>
#include<conio.h>

int main(){
	
	FILE *file = fopen("demo.txt","w");
	
//	file 
	if(file == NULL){
		printf("Erroring Opeing fie\n");
		return 1;
	}
	
	fprintf(file,"Hello this Write function");
	fclose(file);
	
	printf("File data print successfully");
	
	return 0;
}
