#include<stdio.h>
#include<conio.h>

int main(){
	
	FILE *file = fopen("test.txt","a");
	char str[100];
	
//	file 
	if(file == NULL){
		printf("Erroring Opeing fie\n");
		return 1;
	}
	
	fputs("\nhello append data",file);
	
	fclose(file);
	
	printf("Data successfully printed");
	
	
	return 0;
}
