#include<stdio.h>
#include<conio.h>

void capitalize(char str[]){
	
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = toupper(str[0]);
    }
}

void main(){
    char product[] = "laptop";
    char username[] = "meet";

    capitalize(product);
    capitalize(username);

    printf("Product Name: %s\n", product);
    printf("Username: %s\n", username);

    getch();
}
