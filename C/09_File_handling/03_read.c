#include<stdio.h>
#include<conio.h>

int main(){
	
	FILE *file = fopen("test.txt","r");
	char str[100];
	
//	file 
	if(file == NULL){
		printf("Erroring Opeing fie\n");
		return 1;
	}
	
	while(fgets(str,100,file) != NULL){
		printf("%s",str);
	}
	
	fclose(file);
	
	
	return 0;
}
