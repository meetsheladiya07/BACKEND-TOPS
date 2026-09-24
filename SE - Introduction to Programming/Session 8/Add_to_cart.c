#include<stdio.h>
#include<conio.h>

void addToCart(char *cart[], int *count, char product[]){
    cart[*count] = product;
    (*count)++;

    printf("\nUpdated Cart:\n");
	
	int i;
    for(i=0;i<*count; i++){
        printf("%d. %s\n",i+1,cart[i]);
    }
}

void main(){
    char *cart[10];
    int count = 0;

    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");
    addToCart(cart, &count, "Keyboard");

    getch();
}
