#include<stdio.h>
#include<conio.h>

void formatPrice(int price)
{
    printf("Rs.%d", price);
}

void main()
{
    printf("Laptop: ");
    formatPrice(1599);

    printf("\nHeadphones: ");
    formatPrice(24999);

    printf("\nMouse: ");
    formatPrice(799);

    getch();
}
