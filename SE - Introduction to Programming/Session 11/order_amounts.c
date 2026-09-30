#include<stdio.h>
#include<conio.h>

void main(){
    int orders[5] = {250, 450, 180, 320, 600};
    int *ptr;
    int i;
    ptr = orders;

    for(i=0;i<5;i++){
        printf("Order Amount: %d\n", *ptr);
        printf("Memory Address: %p\n\n", ptr);

        ptr++;
    }

    getch();
}
