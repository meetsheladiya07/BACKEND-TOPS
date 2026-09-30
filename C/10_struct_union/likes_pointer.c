#include<stdio.h>
#include<conio.h>

void main(){
	
    int likes=50;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Likes: %d\n", likes);

    printf("Address stored in ptrLikes: %p\n", ptrLikes);

    getch();
}
