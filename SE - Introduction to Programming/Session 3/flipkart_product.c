#include<stdio.h>
#include<conio.h>

void main() {
    char productName[] = "Samsung Galaxy S26";
    float price = 74999.50;
    double rating = 4.5;

    printf("Product Name: %s | Data Type: char[]\n", productName);
    printf("Price: %.2f | Data Type: float\n", price);
    printf("Rating: %.1lf | Data Type: double\n", rating);

    getch();
}
